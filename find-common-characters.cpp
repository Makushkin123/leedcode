//https://leetcode.com/problems/find-common-characters/
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
       
        vector<int> top(26, INT_MAX);
        vector<string> b;
        
        
        for (int i = 0; i < A.size(); i++)
        {
            vector<int> temp(26, 0);
            
            for (auto v: A[i])
                
                temp[v-'a']++;
                
            for (int j = 0; j < 26; j++)
                
            top[j] = min(top[j],temp[j]);
                                          
        }
        
      
        
        for (int i = 0; i < 26; i++)
            
            for (int j = 0; j < top[i]; j++)
                
                b.push_back({char(i+'a')});
        
        return b;
       
    }
};
