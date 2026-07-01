#include<bits/stdc++.h>
using namespace std;

void Digit_Extraction(int n)
{
	while(n>0)
	{
		for(int i = 0;n>0;i++)
		{
			int lastdigit = n % 10;
			cout<<lastdigit<<endl;
			n = n / 10;
		}
	}

}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	Digit_Extraction(n);
	return 0;
}