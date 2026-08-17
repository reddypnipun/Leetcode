// Last updated: 8/17/2026, 4:07:16 PM
class Solution {
public:
    bool isPalindrome(int num) {
    if (num < 0 || (num % 10 == 0 && num != 0)) {
        return false;
    }

    int originalNum = num;
    long long reversedNum = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num /= 10;
    }
    return originalNum == reversedNum;

} 
};