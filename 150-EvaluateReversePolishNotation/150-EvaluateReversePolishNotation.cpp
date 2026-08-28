// Last updated: 8/28/2026, 2:59:33 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int num1, num2;
        
        for (const string& s : tokens) {
            if (s == "+" || s == "-" || s == "/" || s == "*") {
                num1 = st.top(); st.pop();
                num2 = st.top(); st.pop();
                
                if (s == "+") num1 = num2 + num1;
                else if (s == "-") num1 = num2 - num1;
                else if (s == "/") num1 = num2 / num1;
                else num1 = num2 * num1;
                
                st.push(num1);
            } 
            else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
