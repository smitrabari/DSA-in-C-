#include<iostream>
using namespace std;

void p1(int n)
{
	for(int i = 1;i <= 2*n - 1;i++)
	{
		int s = i;
		if(n<i)
		{
			s = 2*n-i;
		}
		for(int j = 1;j <= s;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main()
{
	p1(3);
	return 0;
}