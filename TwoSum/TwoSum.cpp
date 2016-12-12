#include <iostream>
#include <string>
#include<iomanip>

int* twoSum(int data[],int numsSize,int target);

int main()
{
	int arr[3]={3,2,4};
	int sum=6;
	int* output;
	output=twoSum(arr,sizeof(arr)/sizeof(int),sum);
	std::cout<<*output<<","<<*(output+1)<<std::endl;
	delete[] output;
	return 0;
}

int* twoSum(int* nums,int numsSize,int target)
{
	int *result = new int[2];
	
	for(int i = 0, j = 0; i < numsSize; i++)
	{
		j = i + 1;
		for(; j < numsSize; j++)
		{
			if((nums[i]+nums[j])==target)
			{
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;

}

