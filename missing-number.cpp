//https://leetcode.com/problems/missing-number/
class Solution
{
public:

int missingNumber(std::vector<int>& n) 
    
{
    int temp = 0;
    
    int summ = ((n.size() + 1) * n.size()) / 2;
    
    for(const auto &el: n)
    {
        temp += el;
    }
    
    return summ- temp;
}
};
