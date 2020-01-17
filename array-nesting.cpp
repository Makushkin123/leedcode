//https://leetcode.com/problems/array-nesting/
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        vector<bool> result(nums.size(),false);
        
        int temp=0;
        
        int a;
        
        for(int i=0;i<nums.size();i++)
            
        {
           a=nums[i];
            
            if(result[nums[i]])
                
                continue;
            
            
            int count=0;
            
            
            while(!result[a])
                
            {
                count++;
                
                result[a]=true;
                
                a=nums[a];
                
                temp=max(temp,count);
            }
        }
        return temp;
    }
};
