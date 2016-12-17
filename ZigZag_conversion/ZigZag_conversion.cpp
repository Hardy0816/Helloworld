#include <iostream>
#include <string>
//#include "ZigZag_conversion.h"
using namespace std;

void main() 
{
	string s="abcdefg";
	string da="";
	int numRows=3;
	string str="";
	string data[3];
	int number=s.length();
	//string **data;
	//data = new string*[number] ;  
 //   for(int k = 0 ; k <numRows; k ++ )
	//{
	//	data[k] = new string[number];
	//}

    for(int i=0, j=0, m=0, n=0;(m<number/(2*numRows-2)+1);m++)//m对应周期数，n对应字符串的序号
	{
		j+=m*(numRows-1);
		for(i=0;i<numRows;i++,n++)
		{
			if(n==number)
			{break;}
			data[i][j]=s[n];
		}
		//i=numRows-2;
		j=j+1;
		for(i=0;i<numRows-2;i++,j++,n++)
		{
			if(n==number)
			{break;}
			data[numRows-2-i][j]=s[n];

		}
		if(n==number)
		{exit;}
	}
	for(int i=0;i<numRows;i++)
	{
		for(int j=0;j<number;j++)
		{
			str+=data[i][j];
		}
	}
	cout<<str;
    
}