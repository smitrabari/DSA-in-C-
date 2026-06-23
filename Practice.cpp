#include<bits/stdc++.h>
using namespace std;

void p1(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}

void p2(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}

void p3(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
}

void p4(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
	
}

void p5(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= n-i+1 ; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	
}

void p6(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j <= n-i+1 ; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
}

void p7(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < n-i-1; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*i+1; j++)
		{
			cout<<"*";
		}

		for (int k = 0; k < n-i-1; k++)
		{
			cout<<" ";
		}
		cout<<"\n";
	}
	
}

void p8(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < i; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*n - (2*i+1); j++)
		{
			cout<<"*";
		}

		for (int e = 0; e < i; e++)
		{
			cout<<" ";
		}
		cout<<"\n";
	}
	
}
void p9(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < n-i-1; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*i+1; j++)
		{
			cout<<"*";
		}

		for (int k = 0; k < n-i-1; k++)
		{
			cout<<" ";
		}
		cout<<"\n";
	}

	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < i; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*n - (2*i+1); j++)
		{
			cout<<"*";
		}

		for (int k = 0; k < i; k++)
		{
			cout<<" ";
		}
		cout<<"\n";
	}
	
	
}

void p10(int n)
{
	for(int i = 1;i<=2*n-1;i++)
	{
		int s = i;
		if(i>n)
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

void p11(int n)
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

void p12(int n)
{
	for(int i = 1;i<=n;i++)
	{
		int r = i;
		for(int j = 1;j<=i;j++)
		{
			cout<<j;
		}
		for(int y = 0;y<=1;y++)
		{
			for(int j = 1;j<=n-i;j++)
			{
				cout<<" ";
			}
		}
		for(int j = 1;j<=i;j++)
		{
			cout<<r;
			r--;
		}
		cout<<"\n";
	}
}

void p13(int n)
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

void p14(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(char j = 'A' ; j <= 'A' + i ; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
}

void p15(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(char j = 'A' ; j < 'A' + n - i + 1 ; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
}

void p16(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		char a = 'A' + i - 1;
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<a;
		}
		cout<<"\n";
	}
	
}

void p17(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(int j = 1 ; j < n-i+1 ; j++)
		{
			cout<<" ";
		}

		char a = 'A';
		int breakpoint= (2*i-1)/2;
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

void p18(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for(char j = 'E' - i ; j <= 'E' ; j++)
		{
			cout<<j;

		}

		cout<<"\n";
	}
	
}

void p19(int n)
{
	for(int i = 0; i <= n ; i++)
	{
		for(int j = 0; j <= n-i; j++)
		{
			cout<<"*";
		}
		for(int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j <= n-i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i = 0; i <= n ; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		for(int j = 0; j < n-i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j < n-i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}

void p20(int n)
{
	int space = 2*n-2;
	for(int i = 1; i <= 2*n-1 ; i++)
	{
		int s = i;
		if(i>n)
		{
			s = 2*n-i;
		}
		for(int j = 1 ; j <= s; j++)
		{
			cout<<"*";
		}

		for(int j = 1 ; j <= space; j++)
		{
			cout<<" ";
		}
		


		for(int j = 1 ; j <= s; j++)
		{
			cout<<"*";
		}
		cout<<endl;
		if(i<n)
		{
			space=space-2;
		}
		else
		{
			space=space+2;
		}
		
	}
}

void p21(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(i==0 || i==n-1 || j==0 || j==n-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	
}

void p22(int n)
{
	for(int i = 0; i < 2*n-1 ; i++)
	{
		for(int j = 0 ; j < 2*n-1 ; j++)
		{
			int top = i;
			int left = j;
			int right = (2*n-2)-j;
			int bottom = (2*n-2)-i;
			cout<<(n-min(min(top,bottom),min(left,right)));
		}
		cout<<"\n";
	}
	
}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	p22(n);
	return 0;
}