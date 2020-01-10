https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> temp={};
        
        generate("",temp,n,0,0);
        
        
        return temp;
    }
    
    void generate(string curString,vector<string> &temp,int n,int open,int close)
    {
        if(curString.size()==2*n)
            
            temp.push_back(curString);
        
        else
        {
            if(open<n)
                
                generate(curString+"(",temp,n,open+1,close);
            
            if(close<open)
                
                generate(curString+")",temp,n,open,close+1);
            
        }
    }
};
