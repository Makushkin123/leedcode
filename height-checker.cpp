//https://leetcode.com/problems/height-checker/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int j = 0;
        
        vector <int > temp = heights;
        
        
        sort(temp.begin(), temp.end());
        
        for (int i =0; i < heights.size(); i++)
            
        {
            if  (temp[i] != heights[i]) {
                
                j++;
                
                }
            
        }
        
        return j;
    }
};
