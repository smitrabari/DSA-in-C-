#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9; //size of an array
	int arr[n] = {20,34,12,53,65,1,2,8,73}; //elements of an array
	int largest = arr[0]; //largest elements as first elements as refrence
	int secondl = -1; //smallest element as -1 for lowest value
	for(int i = 0;i<n;i++) //condition
	{
		if(arr[i]>largest) //condition for largest element
		{
			secondl = largest;//placeing privious largest element as second largest elements 
			largest = arr[i];
		}
		else if(arr[i]<largest && arr[i]>secondl) //condition for second largest element after the largest element position
		{
			secondl = arr[i];
		}
	}
	cout<<secondl<<" ";
	return 0;
}