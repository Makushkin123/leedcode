//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
public:
    int minAddToMakeValid(string S) {
        
        stack<char> temp;
        
        for(int i = 0; i < S.size(); i++)
            
        {        
              if(S[i]==')' && !temp.empty() && temp.top()=='(') {
                  
                
                     temp.pop(); 
                  
                } 
            
                else temp.push(S[i]);
            
            }
                
            
                
          
        
        return temp.size();
    }
    
};
