https://leetcode.com/problems/di-string-match/
class Solution {
public:
    vector<int> diStringMatch(string S) {
       
    vector<int> temp(S.size()+1);
        
    int a = 0;
        
    int b = S.size();
    
    for(int i = 0; i <= S.size(); i++)
    {
        if (i == S.size())
        {
            temp[i] = b;
            
            break;
        }
        
        if(S[i] == 'I')
            
        {
            temp[i] = a++;  
        }
        else
        {
            temp[i] = b--;
        }
    }
    
    return temp;
    }
    
};
