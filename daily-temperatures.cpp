https://leetcode.com/problems/daily-temperatures/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
          
        vector<int> temp( T.size(), 0);
        
       
        

        for(int i =  T.size()-1; i >= 0; i--){
            
            int j = i + 1;
            
            while(j <  T.size() 
                  && T[i] >= T[j])
                
            {
                
                if(temp[j] == 0)
                    
                    
                {
                    
                    j =  T.size();
                    
                    break;
                }
                
                j += temp[j];
            }
            
            temp[i] = (j == T.size())? 0 : j - i;

        }
        
        return temp;
        
    }
};
