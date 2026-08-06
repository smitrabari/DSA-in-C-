#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n) //function declaration
{
	for(int i = 0;i < n - 1;i++) 
	{
		for(int j = 0;j < n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]); //can also use third variable as temp
			}
		}
	}
}

int main()
{
	int n = 6; //Size of array
	int arr[n]={13,46,24,52,20,9}; //elements of array
	selection_sort(arr,n); //function calling
	for(int k = 0;k<n;k++) //for each loop
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}