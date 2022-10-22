/*
33. Search in Rotated Sorted Array

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
*/

#include <bits/stdc++.h>
using namespace std;

int binSearch(vector<int> &arr, int i, int j, int target)
{

    while (i <= j)
    {

        int mid = i + (j - i) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    return -1;
}

int search(vector<int> &nums, int target)
{

    int pivot;

    if (nums.size() == 1)
    {
        if (nums[0] == target)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            pivot = i + 1;
            break;
        }
    }

    int res = binSearch(nums, 0, pivot - 1, target);

    if (res != -1)
    {
        return res;
    }
    else
    {
        res = binSearch(nums, pivot, nums.size() - 1, target);
        return res;
    }

    return -1;
}

int main() {

    int n; cin>>n;
    vector<int> nums;
    int temp;
    for (int i=0; i<n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    int target; cin>>target;
    
    cout<<"Position Index of target is : "<<search(nums, target)<<endl;
    return 0;
}