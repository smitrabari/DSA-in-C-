#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high) //parameter function
{
	int pivot = arr[low]; //pivot is a random value
	int i = low; //starting of the array
	int j = high; //end of the array
	while(i<j) //condition 
	{
		while(arr[i]<=pivot && i<=high-1)//moving left side
		{
			i++;
		}
		while(arr[j]>pivot && j>=low+1)//moving right side
		{
			j--;
		}
		if(i<j)
		{
			swap(arr[i],arr[j]);//swaping elements
		}
	}
	swap(arr[low],arr[j]);//swaping first element!!
	return j; //returning J
}

void quick_sort(int arr[],int low,int high)
{
	if(low<high) 
	{
		int pindex = partition(arr,low,high); //partition index

		quick_sort(arr,low,pindex-1); //1st half
		quick_sort(arr,pindex+1,high); //2nd half
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