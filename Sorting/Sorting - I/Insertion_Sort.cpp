#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n) //function declaration!
{
	
}

int main()
{
	int n = 6; //Size of array
	int arr[n]={13,46,24,52,20,9}; //elements of array
	insertion_sort(arr,n); //function calling
	for(int k = 0;k<n;k++) //for each loop
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}