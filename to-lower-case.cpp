//https://leetcode.com/problems/to-lower-case/
class Solution {
public:
    string toLowerCase(string str) {
        
        string s = "";
        
        for(const char& v :str){
            
            s += tolower(v);
        
        }
        return(s);
    }
};
