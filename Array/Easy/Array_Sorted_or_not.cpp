#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9; //size of an array
	int arr[n] = {3,4,5,1,2}; //elements of an array
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