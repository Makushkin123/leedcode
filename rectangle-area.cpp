https://leetcode.com/problems/rectangle-area/

class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
    {
    
        int l = max(A, E);    
        
        int  r = min(C, G);    
        
        int  u = min(D, H);    
        
        int  b = max(B, F);   
        
        
        if (l>r||b>u) 
            
        return ((C-A)*(D-B) + (G-E)*(H-F));
        
        
        return ((C-A)*(D-B) + - (r-l)*(u-b) + (G-E)*(H-F));
        
    }
};
