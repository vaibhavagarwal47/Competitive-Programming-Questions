# Question Link: https://leetcode.com/problems/trapping-rain-water/
height = [0,1,0,2,1,0,1,3,2,1,2,1]
def trap(height) :
        left = []
        right = []
        m = 0
        for i in height :
            m = max(m , i)
            left.append(m)
        m = 0
        for i in reversed(height) :
            m = max(m, i)
            right.append(m)
        right = sorted(right , reverse = True)
        
        water = 0
        for i in range(len(height)):
            water += min(right[i] , left[i]) - height[i]
            
        return water
output = trap(height)
print(output)
