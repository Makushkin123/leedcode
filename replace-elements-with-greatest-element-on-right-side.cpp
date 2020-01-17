//https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
public:
    vector<int> replaceElements(vector<int>& A) {
        
        
        int n = A.size();
        
        vector<int> B(n);
        vector<int> C;
        
        B[n - 1] = A[n - 1];
        
        for(int i = A.size() - 2; i >= 0; i--) {
            
            B[i] = max(B[i + 1], A[i]);
        }
        
        
        for(int i = 1; i < A.size(); i++)
            
            C.push_back(B[i]);
        
            C.push_back(-1);
        
        return C;
    }
};
