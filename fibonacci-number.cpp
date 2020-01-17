//https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int fib(int N) {
        
    int summ; 
        
    if( N == 1) 
    { 
        return 1;
    }
        if( N == 0)
        {  
           return 0; 
        }
        
        return (summ=fib(N-2)+fib(N-1));
    }
};
