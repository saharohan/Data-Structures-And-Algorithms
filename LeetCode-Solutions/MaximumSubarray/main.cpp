class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1= 0;
        int max2= INT_MIN;
        int n = nums.size();
        for(int i =0; i<n; i++)
        { 
            max1= max1+ nums[i];
             if(max1< nums[i])
             {
                 max1= nums[i];
             }
            
            if(max2< max1)
            {
                max2= max1;
            }
            
        }
        return max2;
        
    }
};
