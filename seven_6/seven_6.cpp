#include<iostream>

int Fill_array(double a[], int length);
void Show_array(double a[], int length);
void Reverse_array(double a[], int length);

int main()
{
	int arr_length=10;
	int fill_number=0;
	double arr[10]={};
    fill_number = Fill_array(arr,arr_length);
	Show_array(arr,fill_number);
	Reverse_array(arr,fill_number);
	Show_array(arr,fill_number);
	return 0;
}

int Fill_array(double a[],int length)
{
	using namespace std;
	int i=0;
	double temp=0;
	cout<<"please enter the array members:\n"<<endl;
    for(i=0;i<length;i++)
	{
		cin>>temp;
		if(!cin)
			break;
		a[i]=temp;
	}
	//cout<<i<<endl;
	return i;
}
void Show_array(double a[], int length)
{
	using namespace std;
	for(int i=0;i<length;i++)
	{
		cout<<a[i]<<endl;
	}
}
void Reverse_array(double a[], int length)
{
	double temp=0.0;
	for(int i=0;i<length/2;i++)
	{
		temp = a[i];
		a[i] = a[length-1-i];
		a[length-1-i] = temp;
	}
}