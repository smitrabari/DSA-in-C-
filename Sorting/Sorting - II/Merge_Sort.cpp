#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
	vector<int> temp; 
	// temp array!!
	// vector because here we use undefined array!!
	int left = low; // left is the first value of first divided array
	int right = mid+1; //right is the first value of second divided array
	while(left<=mid && right<=high) //C1>FA should not pass his limit as mid is the last element
		//C2>SA will start from mid+1 and goes till n-1(high)
	{
		if(arr[left]<=arr[right]) //comparing elements
		{
			temp.push_back(arr[left]);
			left++;
		}
		else
		{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid)
	{
		temp.push_back(arr[left]);
		left++;
	}

	while(right<=high)
	{
		temp.push_back(arr[right]);
		right++;
	}
	int k =0;
	for(int i = low;i<=high;i++) //adding elements to the main array
	{
		arr[i] = temp[k];
		k++;
	}
}

void merge_sort(int arr[],int low,int high) //function declaration(pass by refrence)
{
	if(low>=high) //base case
	{
		return;
	}
	int mid = (low+high)/2; //finding mid value
	merge_sort(arr,low,mid); //first half goes here
	merge_sort(arr,mid+1,high);//second half goes here
	merge(arr,low,mid,high); // mergeing process!!
}

int main()
{
	int n = 6; //Size of array
	int arr[n]={13,46,24,52,20,9}; //elements of array
	merge_sort(arr,0,n - 1); //function calling
	for(int k = 0;k<n;k++) //for each loop
	{
		cout<<arr[k]<<" ";
	}
	return 0;
}