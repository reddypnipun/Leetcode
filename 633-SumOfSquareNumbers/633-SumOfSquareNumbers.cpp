// Last updated: 9/8/2026, 12:33:03 AM
class Solution {
public:
    bool isPerfectSquare(long long n) {
    if (n < 0) return false;
    long long root = round(std::sqrt(n)); 
    return root * root == n;
    }

    bool judgeSquareSum(int c) {
        for(long long i=0;i*i<=c;i++){
            if(isPerfectSquare(c-i*i)) return true;
        }
        return false;
    }
};