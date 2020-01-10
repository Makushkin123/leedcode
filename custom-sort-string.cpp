https://leetcode.com/problems/custom-sort-string/

class Solution {
public: 
string customSortString(string S, string T) 
{
    
        vector<int> mas(26, 0);
        string temp;
    
        for (char v : T) 
            
        {
            mas[v-'a']++;
        }
        
    
        for (char v : S)
        {
            
            while (mas[v-'a'] > 0) 
            {
                
                temp.push_back(v);
                
                mas[v-'a']--;
                
            }
        }
        
        for (int i = 0; i < 26; i++)
        {
            
            while (mas[i] > 0) 
                
            {
                temp += (char)('a' + i);
                
                mas[i]--;
            }
        }
        
        return temp;
    }
 };     
     
