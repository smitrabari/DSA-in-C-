#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1;i<=n;i++)
	{
		int s;
		if(i%2==0)
			{
				s=0;
			}
			else
			{
				s=1;
			}
		for(int j = 1;j<=i;j++)
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