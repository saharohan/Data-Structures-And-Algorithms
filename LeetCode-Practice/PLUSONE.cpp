class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        int g = digits.back();
        int count=0;
        bool t=true;
         if(g==9 && n>1)
           {
             for(int i=n-1; i>=0; i--)
          {
            int j=i+1;
                 if(i>0)
                 {
                 if(digits[i]==9 && digits[i-1]==9 && t==true)
                 {
                     digits[i]=0;
                 }
                 else if (digits[i]!=9 && digits[j]==9 && t==true)
              {
                 digits[i]+=1;
                 digits[j]=0;
                 t=false;
              }
         }
                 else {
                     if(t==true && digits[0]!= 9)
                     {
                         digits[i]+=1;
                        digits[j]=0;
                        
                     }
                    else if (digits[0]==9 && t==true){
                        digits[0]=0;
                        digits.insert(digits.begin(), 1);
                    }
                 }
             }
         }
         else if(g==9 && n<2)
        {
            digits.pop_back();
            digits.push_back(1);
            digits.push_back(0);
            
        }
       else{
            digits.pop_back();
            digits.push_back(g+1);
             }
         return digits;
    }
};
