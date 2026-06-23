#include<bits/stdc++.h>
using namespace std;

void pair1()
{
	pair<int,int> BOD ={1,8};
	cout<<BOD.first<<" "<<BOD.second;
}

void pair2()
{
	pair<int,pair<int,int>> BOD ={1,{8,2007}};
	cout<<BOD.first<<" "<<BOD.second.first<<" "<<BOD.second.second;
}

void pair3()
{
	pair<int,int> arr[]={{1,2},{3,4},{5,6} };
	cout<<arr[1].second;
}

int main()
{
	pair3();
	return 0;
}