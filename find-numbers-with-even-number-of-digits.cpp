//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int temp = 0;
          
        for(int v : nums) {
            
            int kol = 0;
            
            while(v) {
                
                v /= 10;
                
                kol+=1;
            }
            
             temp =temp+(kol % 2 == 0);
            
        }
        return temp;
    }
};
