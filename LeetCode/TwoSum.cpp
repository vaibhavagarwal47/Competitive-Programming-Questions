// Question: https://leetcode.com/problems/two-sum/
/*Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]*/

// Solution:

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hash;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            if (hash.find(numberToFind) != hash.end()) // if present in hash
            {
                res.push_back(hash[numberToFind]);
                res.push_back(i);
                return res;
            }
            hash[nums[i]] = i; // if the element not in hash
        }
        return res;
    }
};