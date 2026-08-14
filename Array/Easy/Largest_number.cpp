#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9; //size of array
	int arr[n] = {20,34,12,53,65,1,2,8,73}; //elements of array
	int largest = arr[0]; //largest element take it as first element as refrence
	for(int i = 0;i<n;i++) //for each loop
	{
		if(arr[i]>largest) //condition
		{
			largest = arr[i]; //value asigning
		}
	}

	cout<<largest<<" is the largest element!!";
	return 0;
}