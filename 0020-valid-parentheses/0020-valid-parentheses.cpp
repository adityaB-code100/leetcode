class Solution {
public:
    bool isValid(string s) {
        vector<char> stc;

        for (char p : s) {
            if (p == '(' || p == '[' || p == '{') {
                stc.push_back(p);
            }
            
            else if ((p == ')' || p == ']' || p == '}') && stc.empty()) {
                return false;
            }
            
            else if (p == ')' && stc.back() == '(') {
                stc.pop_back();
            }
            
            else if (p == ']' && stc.back() == '[') {
                stc.pop_back();
            }
            
            else if (p == '}' && stc.back() == '{') {
                stc.pop_back();
            }
            
            else {
                return false;
            }
        }

        return stc.empty();
    }
};