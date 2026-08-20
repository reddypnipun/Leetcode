// Last updated: 8/20/2026, 9:46:01 PM
class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=true;
        int front=0;
        int back=s.length()-1;
        while(front<back){
            if(!isalnum(s[front])){
                front++;continue;
            }
            if(!isalnum(s[back])){
                back--;continue;
            }
            if(tolower(s[front]) !=tolower(s[back])) return false;;
            front++;
            back--;
        }
        return flag;
    }
};