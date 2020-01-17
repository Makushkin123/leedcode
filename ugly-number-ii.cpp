//https://leetcode.com/problems/ugly-number-ii/
class Solution {
public:
    int nthUglyNumber(int n) {
        
        vector<int> ugly(n);
        
        ugly[0] = 1;
        
        int x2 = 0;
            
        int x3 = 0;
        
        int x5 = 0;
        
        for (int i = 1; i < n; ++i) {
            
            ugly[i] = min(ugly[x2]*2, min(ugly[x3]*3, ugly[x5]*5));
            
            if (ugly[i] == ugly[x2]*2) {
                
                x2++;
                
            }
            if (ugly[i] == ugly[x3]*3) {
                
                x3++;
            }
            if (ugly[i] == ugly[x5]*5) {
                
                x5++;
            }
        }
        return ugly[n-1];
    }
};
