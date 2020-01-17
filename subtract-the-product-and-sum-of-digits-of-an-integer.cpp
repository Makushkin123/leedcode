//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product = 1;
        int Sum = 0 ;
       while(n){
           int v = 0;
           v=n%10;
           n/=10;
           Product *= v;
            Sum += v;
              
       }
        return(Product-Sum);
    }
};
