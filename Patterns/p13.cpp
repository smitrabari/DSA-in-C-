#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	int num = 1;
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<num<<" ";
			num++;
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