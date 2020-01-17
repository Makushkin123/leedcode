//https://leetcode.com/problems/transpose-matrix/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) 
    {
        int y = A[0].size(); 
        
        int x = A.size();
                                                  
        vector<vector<int>> qwerty;
        
        vector<int> mass;
        
        for( int i = 0; i  < y; i++) 
        {      
                for(int j = 0; j < x; j++)
                {
                    
                    mass.push_back(A[j][i]);
                    
                }
            
                qwerty.push_back(mass);
            
                mass.clear();
        }
        
        return qwerty;
    }
};
