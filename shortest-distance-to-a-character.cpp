//https://leetcode.com/problems/shortest-distance-to-a-character/
class Solution {
public:
  vector<int> shortestToChar(std::string S, char C) 
       {
      
    int n = 0;

    vector<int> temp; 
      
    vector<int> kol;
    
    for(int i = 0; i < S.size(); i++)
    {
        if(S[i] == C)
        {
            temp.push_back(i);
        }
    }
    
    if(temp.size() < 2 )
    {
        for(int i = 0; i < S.size(); i++)
        {
            kol.push_back(abs(temp[0] - i));
        }
        
        return kol;
    }
    
    
    for(int i = 0; i < S.size(); i++)
    {
        int t = min(abs(i - temp[n]),abs(i - temp[n+1]));
        
        kol.push_back(t);
        
        if(temp[n+1] == i && n + 2 < temp.size())
        {
            n++;
        }
    }
    
    return kol;
}
        
    
};
