//https://leetcode.com/problems/number-of-recent-calls/
class RecentCounter {
public:
    
    
    queue<int> temp;
    
    bool fl = true;
    
    RecentCounter() {
    }
    
    int ping(int t) {
        
        while (!temp.empty() ) {
            int tmp = temp.front();
            
            if (tmp < t-3000) {
                
                temp.pop();
              
               
            }
            else {
                break;
            }
        }
        
        temp.push(t);
        
        return temp.size();
    }
};
