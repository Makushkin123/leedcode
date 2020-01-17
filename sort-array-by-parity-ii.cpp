//https://leetcode.com/problems/sort-array-by-parity-ii/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int bol;
        
        for(int i = 0, j = 1; i < A.size() && j < A.size();) {
            
            if(A[j] % 2 == 1) 
                
            {
                
                j += 2;
            }
            
            else 
                if(A[i] % 2 == 0) 
                    
                {
                    
                
                i += 2;
            }
            
            else 
            {   
                bol=A[i];
                
                A[i]=A[j];
                
                A[j]=bol;
            }
        }
        return A;
    }
};
