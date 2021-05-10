class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int n= nums.size();
        
        for(int i=0; i<=n; i++)
              for(int j=i+1; j<n; j++)
                    for(int k=i+2; k<n; k++)
                  
                if(nums[i]==nums[j] && nums[i]==nums[k] )
                    nums[i]=891;
                                
            nums.erase(remove(nums.begin(), nums.end(), 891), nums.end()); 
       
        
        return nums.size();
    }
};
