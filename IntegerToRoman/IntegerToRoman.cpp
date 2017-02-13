#include<iostream>
#include<string>
using namespace std;
string intToRoman1(int num) 
{  
       string str;    
       string symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};    
       int value[]=    {1000,900,500,400, 100, 90,  50, 40,  10, 9,   5,  4,   1};   
       for(int i=0;num!=0;++i)  
       {  
            while(num>=value[i])  
          {  
               num-=value[i];  
               str+=symbol[i];  
            }  
        }  
        return str;  
  } 

string intToRoman(int num) 
{
	 //string symbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};    
  //   int value[]=    {1000,900,500,400, 100, 90,  50, 40,  10, 9,   5,  4,   1};
	 string s;
	 while(num > 0)
		{
			if(num >= 1000)
			{
				s += "M";
				num -= 1000;
			}
			if(num >= 900 && num <1000)
			{
				s += "CM";
				num -= 900;
			}
			if(num >= 500 && num <900)
			{
				s += "D";
				num -= 500;
			}
			if(num >= 400 && num <500)
			{
				s += "CD";
				num -= 400;
			}
			if(num >= 100 && num <400)
			{
				s += "C";
				num -= 100;
			}
			if(num >= 90 && num <100)
			{
				s += "XC";
				num -= 90;
			}
			if(num >= 50 && num <90)
			{
				s += "L";
				num -= 50;
			}
			if(num >= 40 && num <50)
			{
				s += "XL";
				num -= 40;
			}
			if(num >= 10 && num <40)
			{
				s += "X";
				num -= 10;
			}
			if(num >= 9 && num <10)
			{
				s += "IX";
				num -= 9;
			}
			if(num >= 5 && num <9)
			{
				s += "V";
				num -= 5;
			}
			if(num >= 4 && num <9)
			{
				s += "IV";
				num -= 4;
			}
			if(num >= 1 && num <4)
			{
				s += "I";
				num -= 1;
			}
		}
     return s;
}

int main()
{
	int n = 400;
	string s1 = intToRoman(n);
	string s = "MCMXCVI";
	return 0;
}