#include<iostream>
using namespace std;

void p1(int n)
{
	for(int i = 1;i <= n;i++)
	{
		int r = i;
		for(int j = 1;j <= i;j++)
		{
			cout<<j;
		}
		for(int j = 1;j <= n-i;j++) //space
		{
			cout<<" ";
		}
		for(int j = 1;j <= n-i;j++) //space
		{
			cout<<" ";
		}
		for(int j = 1;j <= i;j++)
		{
			cout<<r;
			r--;
		}
		cout<<endl;
	}
}

int main()
{
	p1(4);
	return 0;
}