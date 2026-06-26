#include<bits/stdc++.h>
#include<vector>
using namespace std;

void function_auto()
{
	vector<int> v = {10,20,30,40,50};
	for(auto it = v.begin();it != v.end();it++)
	{
		cout<<*(it)<<" ";
	}
}

void normal()
{
	vector<int> v = {10,20,30,40,50};
	for(vector<int>::iterator it = v.begin(); it != v.end() ; it++)
	{
		cout<<*(it)<<" ";
	}
}

void for_each_loop()
{
	vector<int> v = {10,20,30,40,50};
	for(auto it : v)
	{
		cout<<it<<" ";
	}
}

int main()
{
	for_each_loop();
	
	return 0;
}