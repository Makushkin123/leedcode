//https://leetcode.com/problems/length-of-last-word/
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        if(s.size()==0)
            
        return 0;
        
        if(s.size()==1 && s[0]==' ')
            
        return 0;
        
        int i=s.size()-1;
        
        int temp=0;
        
        while(s[i]==' ')
            
        i--;
        
        while(i>=0)
            
        {
            if(s[i]==' ') 
                
            break;
            
            temp++;
            
            i--;
        }
        
        return temp;
    }
};
