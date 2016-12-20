#include<iostream>

int reverse(int x)
{
    int y = 0;
    int m=0,n=0;
	n = x;
    for(int i=0;abs(n)>0;i++)
    {
        m=n%10;
        n=n/10;
        y+=m;
		if(abs(n)>0)
        y*=10;
    }
	return y;
}

int main()
{
	int data = 1534236469;
	int reverse_re = 0;
	reverse_re = reverse(data);
}