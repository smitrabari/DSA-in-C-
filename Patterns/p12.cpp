#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1;i<=n;i++)
	{
		int r = i; //temp value
		for(int j = 1;j<=i;j++) //simple
		{
			cout<<j;
		}
		for(int y = 0;y<=1;y++) //space
		{
			for(int j = 1;j<=n-i;j++)
			{
				cout<<" ";
			}
		}
		for(int j = 1;j<=i;j++) //miror effect of number using temp.
		{
			cout<<r;
			r--;
		}
		cout<<"\n";
	}
}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	smit(n);
	return 0;
}