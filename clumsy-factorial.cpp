//https://leetcode.com/problems/clumsy-factorial/

class Solution {
public:
    int clumsy(int N) {
        
        int fak = 0;
        
        bool fl = true;
        
        int i = N;
        
        while(i > 0 )
        {
            int temp = i;
            
            if (i-1 > 0)
                
                temp *= (i-1);
            
            
            if (i-2 > 0)
                
                
                temp /= (i-2);
            

            if (fl)
                
                
            {
                fak += temp;
                
                fl = false;
                
            }
            
            else
                
            {
                
                fak -= temp;
                
            }

            
            if (i-3 > 0)
                
                
                fak += (i-3);
            
            
            i -= 4;
            
        }
        
        
        return fak;
    }
};
