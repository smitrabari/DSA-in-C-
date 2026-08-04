#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1;i<=2*n-1;i++) //no. of rows
	{
		int s = i; //temp values
		if(i>n) //condition if row > n then 2n-i
		{
			s = 2*n-i;
		}
		for(int j = 1;j<=s;j++)
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