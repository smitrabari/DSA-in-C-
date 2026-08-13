#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 9;
	int arr[n] = {20,34,12,53,65,1,2,8,73};
	int largest = arr[0];
	for(int i = 0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
	}

	cout<<largest<<" is the largest element!!";
	return 0;
}