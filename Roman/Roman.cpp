#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s) 
{
	int res = 0;
	int n1 = 0,n2 = 0;
	for(int i = 0; i < s.size(); i++)
	{
		switch (s[i]) 
		{
		case 'I': n1 = 1;break;  
		case 'V': n1 = 5;break;   
		case 'X': n1 = 10;break;  
		case 'L': n1 = 50;break;   
		case 'C': n1 = 100;break;   
		case 'D': n1 = 500;break;   
		case 'M': n1 = 1000;break;   
		}  
        if(i == 0)
			res += n1;
		else
		{
			if(n2 >= n1)
				res += n1;
			else
				res = res - 2*n2 + n1;
		}
		n2 = n1;
	}
    return res;
}


int main()
{
	int n = 0;
	string s = "MCMXCVI";
	n = romanToInt(s);
	return 0;
}