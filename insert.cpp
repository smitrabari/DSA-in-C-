#include<bits/stdc++.h>
using namespace std;

void insert_function()
{
	vector<int> v = {10,20,30,40,50};
	v.insert(v.begin()+5,60);
	for(int i : v)
	{
		cout<<i<<" ";
	}

}

void insert_function_start_end()
{
	vector<int> v = {10,20,30,40,50};
	v.insert(v.begin()+5,2,10);
	for(int i : v)
	{
		cout<<i<<" ";
	}

}

int main()
{
	insert_function_start_end();
	return 0;
}