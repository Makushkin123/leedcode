//https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        for(int& V : A){
            
            V*=V;
        }
        
        sort(A.begin(),A.end());
    
        return A;
    }
};
