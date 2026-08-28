// Last updated: 8/28/2026, 10:00:31 PM
class Solution {
public:
    string simplifyPath(string path) {
        vector<string_view> st;
        string_view s(path);
        size_t start = 0;
        size_t n = path.length();

        while (start < n) {
            while (start < n && path[start] == '/') {
                start++;
            }
            if (start >= n) break;

            size_t end = start;
            while (end < n && path[end] != '/') {
                end++;
            }

            string_view token = s.substr(start, end - start);
            start = end;

            if (token == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else if (token != ".") {
                st.push_back(token);
            }
        }

        if (st.empty()) return "/";

        string result = "";
        for (string_view dir : st) {
            result += "/";
            result += dir;
        }

        return result;
    }
};