#include<iostream>

int factorial(int number);

int main()
{
	using namespace std;
	int num;
	cout<<"Please input the number of factorial(enter a nagetive number to stop)"<<endl;
	while(cin>>num)
	{
		if(num<0)
			break;
		cout<<"The factorial of "<<num<<" is: ";
		cout<<factorial(num)<<endl;
		cout<<"Please input the number of factorial(enter a nagetive number to stop)"<<endl;
	}
	return 0;
}
int factorial(int number)
{
	int result=0;
	if(number==0)
		result=1;
	if(number>0)
		result=number*factorial(number-1);
	return result;
}