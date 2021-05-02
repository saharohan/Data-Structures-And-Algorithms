class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
        string s;
        int m = INT_MAX;
        int count=0;
      
        for(int i=0; i<strs.size(); i++)
        {
            if(strs[i].length() < m)
            {
                s = strs[i];
                m = strs[i].length();
            }
        }
        for(int m=0; m<s.length(); m++)
        {
            for(int p=0; p<strs.size(); p++)
            {
                if(strs[p][m]!= s[m])
                {
                       return s.substr(0,count);
                }
               
            }
             count++;
        }
       return s.substr(0,count);
    }
};
