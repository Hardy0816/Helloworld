#include <iostream>
#include <string>
//#include "ZigZag_conversion.h"
using namespace std;

string convert(string s, int numRows) 
{
	
	string str="";
	int number=s.length();
	if(numRows<2||number<2)
		return s;
    for(int i=0,k=0;i<numRows;i++)
	{

		if(i==0||i==numRows-1)
			for(int j=0;j<number/(2*numRows-2)+1;j++)
			{
				if((i+j*(2*numRows-2))<number)
				str+=s[i+j*(2*numRows-2)];
			}
		if(i>0&&i<numRows-1)
		{
			for(int j=0;j<number/(2*numRows-2)+1;j++)
			{
				if((i+j*(2*numRows-2))<number)
				str+=s[i+j*(2*numRows-2)];
				if((i+2*numRows-4-k+j*(2*numRows-2))<number)
				str+=s[i+2*numRows-4-k+j*(2*numRows-2)];
			}
			k=k+2;
		}
		
	}

    return str;
}
void main() 
{
	string s0="ABCDE";
	string da="";
	int numRows=4;
	da = convert(s0,numRows);
	cout<<da;
    
}