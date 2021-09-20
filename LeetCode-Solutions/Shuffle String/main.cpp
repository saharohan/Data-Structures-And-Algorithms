class Solution {
    
public:
    string restoreString(string s, vector<int>& indices) {
        int d;
        string s1  = s;
        for(int i=0; i<s.size(); i++)
        {
            
           d = indices[i];
           s[d]= s1[i]; 
           
        }
        return s;
    }
};
