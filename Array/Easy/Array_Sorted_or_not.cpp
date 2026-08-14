#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9; //size of an array
	int arr[n] = {20,34,12,53,65,1,2,8,73}; //elements of an array
	string result;
	for(int i = 1; i < n ; i++) //for each loop(start from 1)
	{
		if(arr[i]>=arr[i-1]) // condition of comparing two elements on row
		{

		}
		else
		{
			result = "true";
		}
		result = "false";
	}
	cout<<result<<" ";
	return 0;
}