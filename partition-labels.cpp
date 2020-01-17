//https://leetcode.com/problems/partition-labels/
class Solution {
public:
    vector<int> partitionLabels(string S) {
        
        vector<int> map(26); 
        vector<int> temp; 
        int a=0;
        int b=0;  
        
        for(int i=0; i<S.size(); ++i){
            
            map[S[i]-'a']=i;
        }
        
        for(int i=0 ; i<S.size(); i++){
            
            b=max(map[S[i]-'a'],b);
            
            if(i==b){
                
                temp.push_back(i-a+1);
                
                a=i+1;
            }
        }
        return temp;
    }
};
