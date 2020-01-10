https://leetcode.com/problems/queens-that-can-attack-the-king/
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
    
    vector < vector <int> > vec {{0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}};
        
        vector <vector<int>> temp;
      
        
        for (auto& v : vec) {
            
           int x =  king[0];
            
           int y = king[1];
            
           bool fl = false;
            
            vector <int> attack {x, y};
            
  while (attack[0] >= 0 && attack[0] <  8 && attack[1] >= 0 && attack[1] <  8 && !fl )
            {
                
             auto it =find (queens.begin(), queens.end(),attack);
                
                if (it != queens.end()) {
                    
                    temp.push_back(attack);
                    
                    fl = true;
                }                
                 attack[1] += v[1];
                
                 attack[0] += v[0];
            }
        }
        return temp;
    }
};
