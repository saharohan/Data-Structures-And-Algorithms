class Solution {
public:
    int jump(vector<int>& nums) {
       int j = 0;
       int m =0;
        int c=0;
        
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]+i > m)
            {
                m = nums[i]+i;
            }
            
            if(c == i)
            {
                c= m;
                j++;
            }
        }
        return j+1;
    }
        
            
};
