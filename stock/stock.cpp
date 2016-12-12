#include <iostream>
#include "stock.h"

Stock::Stock()
{
	std::cout << "defoult constructor called\n";
	company = "no name";
	shares = 0;
	share_val=0.0;
	total_val=0.0;
}
Stock::Stock(const std::string & co, long n, double pr)
{
	std::cout<<"Constructor using"<<co<<"called\n";
	company =co;
	if (n<0)
	{
		std::cout<<"Number of shares can't be negative;"
			<<company<<"shares set to 0.\n";
		shares=0;
	}
	else
		shares=n;
	share_val=pr;
	set_tot();

}
Stock::~Stock()
{
	std::cout<<"Bye, "<< company <<"!\n";
}
void Stock::buy(long num, double price)
{
	if(num<0)
	{
		std::cout<<"number of shares purchased can't be negative."
			<<"Transaction is aborted.\n";
	}
	else
	{
		shares+=num;
		share_val=price;
		set_tot();
	}

}
void Stock::sell(long num,double price)
{
	using std::cout;
	if (num<0)
	{
		cout<<"number of shares sold can't be negative"
			<<"Transaction is absorted.\n";
	}
	else if (num>shares)
	{
		cout<<"you can't sell more than you have!"
			<<"tansaction is aborted.\n";
	}
	else
	{
		shares=num;
		share_val=price;
		set_tot();
	}

}
void Stock::update(double price)
{
	share_val=price;
	set_tot();
}
void Stock::show()
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig=
		cout.setf(ios_base::fixed,ios_base::floatfield);
	//set format to "#.###"
	std::streamsize prec=cout.precision(3);
	cout<<"company: "<<company<<" shares: "<<shares<< '\n';
	cout<<"share price : $"<<share_val;
	//set format to "#.##"
	cout.precision(2);
	cout<<"Total worth: $"<<total_val<<'\n';
	//restore original format
	cout.setf(orig,ios_base::floatfield);
	cout.precision(prec);
}

