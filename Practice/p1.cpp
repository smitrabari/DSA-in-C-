#include<iostream>
using namespace std;

void p1(int n)
{
	for(int i = 1;i <= n;i++)
	{
		int s;
		if(i%2==0)
		{
			s = 1;
		}
		else
		{
			s = 0;
		}
		for(int j = 1;j <= i;j++)
		{
			if(s==1)
			{
				s--;
			}
			else
			{
				s++;
			}
			cout<<s<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	p1(5);
	return 0;
}