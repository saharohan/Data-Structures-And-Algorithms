#include <bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        	set<int>st;
        nums.clear()
      for (auto it : nums) {
         
          st.insert(it);
          nums.pushback(st);
      }
		nums.clear();
            for (auto it1 : st) 
               
                {
                    nums.push_back(it1);
                }
        return nums.size();
    }
    
};
