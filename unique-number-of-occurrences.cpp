//https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> temp1;
        
        set<int> temp2;
        
        for(int& v : arr)
        {
            temp1[v]+=1;
        }
        
        for(auto v : temp1)
        {
            if(temp2.count(v.second)) {
            
                return false;
                    
             }   else{
                
                 temp2.insert(v.second) ;   
                }
                    
             }
        
        return true;
    }
};
