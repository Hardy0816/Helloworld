#include<iostream>

int reverse(int x)
{
    long long y = 0;
    long m=0,n=0;
	n = x;
    for(int i=0;abs(n)>0;i++)
    {
		m=n%10;
        n=n/10;
        y+=m;
		if(abs(n)>0)
        y=y*10;

    }
	if(abs(y)>2147483647)
		y=0;
	return y;
}

int main()
{
	int data = -1534236469;
	int reverse_re = 0;
	reverse_re = reverse(data);
}