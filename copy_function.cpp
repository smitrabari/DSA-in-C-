#include<bits/stdc++.h>
using namespace std;

void copy_function()
{
	vector<int> v = {10,20,30,40,50};
	vector<int> copy(2,10);
	v.insert(v.begin(),copy.begin(),copy.end());
	for(int i : v)
	{
		cout<<i<<" ";
	}

}

int main()
{
	copy_function();
	return 0;
}