#include<iostream>

using namespace std;

string longestPalindrome(string s);

int main()
{
	string s = "babad";
	string s1;
	s1 = longestPalindrome(s); 
}
string longestPalindrome(string s)
{
	string s1 = "";
	int length=s.length();
	int i=0,j=0,k=0;
	while(i<length-s1.length()/2)//以i个元素为中心，比较两侧是否相等，如果相等继续向两侧延伸，否则跳出并记录复制给s1，移到下一个i+1
	{
		if(j<0)
		{
			if((s1.length())<(k-j) & s[j+1]==s[k-1])
			s1 = s.substr(j+1,k-1-j);
			i++;
		}
		if(k>length)
		{
			if((s1.length())<(k-j) & s[j+1]==s[k-1])
			s1 = s.substr(j+1,k-1-j);
			break;
		}
		j=i;k=i;
		while(s[k]==s[k+1] & k<length)
		{k++;}
		while((j>-1) & (k< length+1)) //j,k分别是两侧元素
		{
			if(s[j]==s[k] & j>-1 & k< (length+1))
			{
				j--;k++;
			}
			else
			{
				if((s1.length())<(k-j) & s[j+1]==s[k-1])
				s1 = s.substr(j+1,k-1-j);
				i++;
				break;
			}
		}
	}
	return s1;
}