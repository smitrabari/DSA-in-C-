#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<=i;j++)
		{
			cout<<"*";
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