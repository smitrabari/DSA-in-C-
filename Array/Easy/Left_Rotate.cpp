#include<bits/stdc++.h>
using namespace std;
// left Rotate
int main()
{
	int n = 5; //size of array
	int arr[n] = {1,2,3,4,5}; //elements of array
	int temp = arr[0]; // creaeing a temp. variable for storeing the last value
	for(int i = 1;i < n;i++) // for loop for rotateing
	{
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp; //asign the last value
	for(int i = 0; i< n;i++) //for each loop
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}