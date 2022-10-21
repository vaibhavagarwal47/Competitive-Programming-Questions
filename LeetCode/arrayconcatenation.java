class Solution 
{
    public int[] getConcatenation(int[] nums)
    {
        int i,j;
        int[]ans=new int[2*nums.length];
        
        for(i=0;i<2*nums.length;)
        {
            for(j = 0; j < nums.length; j++)
            {
                ans[i] = nums[j];
                i++;
            }
        }
        return ans;
        
    }
}
