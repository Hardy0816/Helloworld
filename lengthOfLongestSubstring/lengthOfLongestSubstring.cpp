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
	for(int i=0;i<length;i++)//�ӵ�i��Ԫ�ؿ�ʼ�Ƚ�
	{	
		p=1;
		for( j=i+1;j<length;j++) //�жϵ�i������j��Ԫ���ǳ����ظ�
		{
			q=0;
			for( k=i;k<j;k++)//�жϵ�j��Ԫ���Ƿ����i��֮��j��֮ǰԪ�س����ظ�
			{
				if(s[j]==s[k])
				{
					q=1;         //q��¼�Ƿ����ظ������ظ���q=1���ж�ѭ��
					break;
				}
			}
			if(q==0)             //q=0,��Ԫ��֮ǰû���ظ����֣�����+1
				p++;
			else
			{
				if(max<p)
					max=p;
				break;
			}
		}
		if(j==length)      //��������һ��Ԫ�أ�Ҫ�ж��Ƿ�������ݸ��Ƹ�max
		{
			if(max<p)
				max=p;
			break;
		}
	}
    return max;
}