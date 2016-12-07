#include <iostream>
#include <string>

int twosum(int data[],int target,int len);


int main()
{
	int arr[7]={1,9,7,8,1,2,7};
	int sum=8;
	twosum(arr,sum,sizeof(arr)/sizeof(int));
	return 0;
}

int twosum(int data[],int target,int len)
{
	int i=0,j=1,k=0;
	while(i<len)
	{
		j=i+1;
		while(j<len)
		{
			if((data[i]+data[j])==target)
			{
				k++;
				std::cout<<i<<" "<<j<<std::endl;
			}
			j++;
		}
		i++;
	}
	std::cout<<"有"<<k<<"组的和等于Target";
	return 0;
}

