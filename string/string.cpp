#include <iostream>
#include <cstring> //for the strlen()function

int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	
	char name2[Size]="C++owboy";

	cout<<"Howdy! I'm "<<name2;
	cout<<"! What's your name?\n";
	cin>>name1;
	cout<<"Well, "<<name1<< ", your name has ";
	cout<< strlen(name1)<<" letters and is stored\n";
	cout<<"in an array of "<<sizeof(name1)<<" bytes.\n";
	cout<<"Your initial is "<<".\n";
	name2[3]='\0';
	cout<<"Here are the first 3 charaters of my name: ";
	cout<< name2<<endl;
	return 0;
}