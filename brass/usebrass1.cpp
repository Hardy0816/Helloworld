#include<iostream>
#include"brass.h"

int main()
{
	using std::cout;
	using std::endl;
	Brass Piggy("porcelot Pigg",381299,4000.00);
	BrassPlus Hoggy("Horatio Hogg",381299,3000.00);
	Piggy.ViewAcct();
	cout<<endl;
	Hoggy.ViewAcct();
	cout<<endl;
	cout<<"Deposting $1000 into the Hogg Account:\n";
	Piggy.Withdraw(4200.00);
	cout<<"Pigg account balance:$"<<Piggy.Balance()<<endl;
	cout<<"withdrawing $4200 form the Hogg Account:\n";
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();


	return 0;
}