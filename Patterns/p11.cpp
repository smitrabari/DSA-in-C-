#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1;i<=n;i++) //no. of rows
	{
		int s; // temp. value
		if(i%2==0) //odd or even checker
			{
				s=0;
			}
			else
			{
				s=1;
			}
		for(int j = 1;j<=i;j++) //loop
		{
			cout<<s;
			s = 1 - s ;

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