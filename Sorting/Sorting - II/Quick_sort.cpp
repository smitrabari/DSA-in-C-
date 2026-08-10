#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
	int pivot = arr[low];
	int i = low;
	int j = high;
	while(i<j)
	{
		while(arr[i]<=pivot && i<=high-1)
		{
			i++;
		}
		while(arr[j]>pivot && j>=low+1)
		{
			j--;
		}
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}

void quick_sort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pindex = partition(arr,low,high);

		quick_sort(arr,low,pindex-1); 
		quick_sort(arr,pindex+1,high); 
	}
}

int main(){
	int n = 6; //Size of array
	int arr[n]={13,46,24,52,20,9}; //elements of array
	quick_sort(arr,0,n - 1); //function calling
	for(int k = 0;k<n;k++) //for each loop
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}