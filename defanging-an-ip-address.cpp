https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        
       string newaddress;
        
        for(const char& temp : address){
            
            if(temp == '.') 
                newaddress+="[.]";
             else
               newaddress+=temp;
            
        }
        return(newaddress);
    }
};
