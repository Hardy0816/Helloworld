#include<iostream>

using namespace std;
int lengthOfLongestSubstring(string s);
//int lengthOfLongestSubstring1(string s);
int main()
{
	string str = "a";
	int n = 0;
	n =lengthOfLongestSubstring(str);
	return 0;
}
//int lengthOfLongestSubstring1(string s) 
//{
//	int length = 0;
//	string s1="";
//	int n, m;
//	s1+=s[0];
//	n=1;m=0;
//	for(int i=1;i<s.length();i++)
//	{	
//		m = 0;
//		for(int j=0;j<n;j++)
//            if(s[i]==s1[j])
//				m++;
//		if(m==0)
//		{
//			s1+=s[i];
//			n++;
//		}
//	}
//    return n;
//}
int lengthOfLongestSubstring(string s) 
{
	//if(s.length()==0)
	//	return 0;
	int max,p,q,j,k;
	max=0;j=0;
	int length=s.length();
	for(int i=0;i<length;i++)//从第i个元素开始比较
	{	
		p=1;
		for( j=i+1;j<length;j++) //判断第i个后面j个元素是出现重复
		{
			q=0;
			for( k=i;k<j;k++)//判断第j个元素是否与第i个之后j个之前元素出现重复
			{
				if(s[j]==s[k])
				{
					q=1;         //q记录是否有重复，有重复，q=1并中断循环
					break;
				}
			}
			if(q==0)             //q=0,该元素之前没有重复出现，长度+1
				p++;
			else
			{
				if(max<p)
					max=p;
				break;
			}
		}
		if(j==length)      //如果是最后一个元素，要判断是否将最大数据复制给max
		{
			if(max<p)
				max=p;
			break;
		}
	}
    return max;
}