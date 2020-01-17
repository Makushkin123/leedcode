//https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        
      
    sort(A.begin(),A.end(),[&](int num1,int num2) {return (num1 % 2) < (num2 % 2); });
        
        
    return A;
    }
};
