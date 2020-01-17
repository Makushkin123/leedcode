//https://leetcode.com/problems/flipping-an-image/
class Solution
{
    
public:
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A)
    {
        int matrix = A.size();
        
        int mass = A[0].size();
        
        int temp ;
        
        for (int i = 0; i < matrix; ++i)
        {
            for (int j = 0; j < (mass + 1) / 2; ++j)
            {
                temp = A[i][j];
                
                A[i][j] = A[i][mass - 1 - j] ^ 1;
                
                A[i][mass - 1 - j] = temp ^ 1;
            }
        }
        
        return A;
    }
};
