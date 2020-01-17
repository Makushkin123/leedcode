//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
    array<int,10000> temp = {};
    
    for(auto i:A) {
        
        temp[i]++;
        
    }
        
    auto iter = find(temp.begin(),temp.end(),A.size()/2);
        
    
        return (iter - temp.begin());  
    
     }
};
