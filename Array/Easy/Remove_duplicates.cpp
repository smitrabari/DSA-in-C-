#include <bits/stdc++.h>
using namespace std;

int Remove_duplicates(vector<int>& nums)
{
    int n = nums.size();
    int i = 0;

    for(int j = 1; j < n; j++)
    {
        if(nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 5, 6, 7, 7, 7};

    int k = Remove_duplicates(nums);

    cout << "Unique elements: ";

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}