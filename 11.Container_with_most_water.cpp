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
