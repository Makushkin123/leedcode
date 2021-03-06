//https://leetcode.com/problems/max-area-of-island/
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        
        int area = 0;
        
        for(int i = 0; i < grid.size(); ++i)
        {
            
            for(int j = 0; j < grid[i].size(); ++j)
            {
                
                if(grid[i][j] == 1)
                    
                {
                    
                    area = max(area,search(grid,i,j));      
                    
                }                                          
            }
        }
        
        return area;
    }
   
    int search(vector<vector<int>>& grid, int i, int j){
        
        
        if(i < 0 ||
           j < 0 || 
           i >= grid.size() 
           || j >= grid[i].size() 
           || grid[i][j] == 0)
        {
            
            return 0;
        }
        
        // устанавливаем местоположение ноль чтобы не возвращаться в ту же точку.
        grid[i][j] = 0;
        
        return  1 + search(grid,i-1,j)+search(grid,i+1,j) + search(grid,i,j+1)+                     search(grid,i,j-1);     
    }
};
