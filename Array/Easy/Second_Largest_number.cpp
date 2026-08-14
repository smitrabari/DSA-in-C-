#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9;
	int arr[n] = {20,34,12,53,65,1,2,8,73};
	int largest = arr[0];
	int secondl = -1;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			secondl = largest;
			largest = arr[i];
		}
		else if(arr[i]<largest && arr[i]>secondl)
		{
			secondl = arr[i];
		}
	}
	cout<<secondl<<" ";
	return 0;
}