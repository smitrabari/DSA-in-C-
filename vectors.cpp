#include<bits/stdc++.h>
#include<vector>
using namespace std;

void v1()
{
	vector<int> v = {10,15};
	v.push_back(20);
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Size - "<<v.size()<<endl;
	cout<<"Capacity - "<<v.capacity()<<endl;
}

void v2()
{
	vector<int> v(5,0);
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Size - "<<v.size()<<endl;
	cout<<"Capacity - "<<v.capacity()<<endl;
	v.pop_back();
	for(int i:v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Size - "<<v.size()<<endl;
	cout<<"Capacity - "<<v.capacity()<<endl;
}

int main()
{
	v2();
	return 0;
}