// Last updated: 10/18/2026, 9:26:57 PM
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        if(digits[digits.size()-1]<9) digits[digits.size()-1]++;
5        else{
6            int i=digits.size()-1;
7            while(i>=0 && digits[i]==9){
8                digits[i]=0;
9                i--;
10            }
11            if(i<0) digits.insert(digits.begin(), 1);
12            else digits[i]++;
13        }
14        return digits;
15    }
16};