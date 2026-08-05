#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j < n-i+1 ; j++)
		{
			cout<<" ";
		}

		char a = 'A'; //starting point
		int breakpoint= (2*i-1)/2; //position of the center elements
		for(int j = 1 ; j <= 2*i-1 ; j++)
		{
			cout<<a;
			if(j<=breakpoint)
			{
				a++;
			}
			else
			{
				a--;
			}
		}

		for(int j = 1 ; j < n-i+1 ; j++)
		{
			cout<<" ";
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