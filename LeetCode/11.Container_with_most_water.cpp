//Question link : https://leetcode.com/problems/container-with-most-water/
//Question  : You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).Find two lines that together with the x-axis form a container, such that the container contains the most water.Return the maximum amount of water a container can store. 
/* 
Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2 :
Input: height = [1,1]
Output: 1

*/

// solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0, j = height.size()-1, maxArea = INT_MIN;
        while (i<j) {
            int area = min(height[i], height[j])*(j-i);
            maxArea = area>maxArea ? area:maxArea;
            if (height[i] > height[j]) j--;
            else i++;
        }
        return maxArea;
    }
};
