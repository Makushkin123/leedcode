//https://leetcode.com/problems/array-partition-i/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
     int minn = 0;
        
     int i= 0;
     
     sort(nums.begin(),nums.end());
        
        while(i<nums.size()) {
            
            minn +=min(nums[i],nums[i+1]);
            
            i +=2;
            
                       
        }
        
        return minn;
    }
};
