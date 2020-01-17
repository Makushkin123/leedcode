//https://leetcode.com/problems/minimum-time-visiting-all-points/
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        
        int mintime = 0;
        
        for(int i = 0; i < points.size() - 1; i++) {
        
            int x = abs(points[i][0] - points[i + 1][0]);
            
            int y = abs(points[i][1] - points[i + 1][1]);
            
            
            mintime += max(x, y);
        }
        return mintime;
    }
};
