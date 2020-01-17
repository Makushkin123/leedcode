https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
		
        int  a = 0, b = 0; 
        int kol = 0;
        
         for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='L')
                b+=1;
            
              if(s[i]=='R')
                a+=1;
			
            if(a==b){
                kol+=1;
                a = 0;
                b = 0;
            }
        }
        return kol;
    }
};
