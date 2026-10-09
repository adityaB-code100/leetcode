class Solution {
public:
    int minInsertions(string s) {
        vector<char> stc;
        int n = s.size();
        int count = 0;
        int res = 0;

        for (int i = 0; i < n; i++) {
            char key = s[i];

            if (key == '(') {
                stc.push_back(key);
            }
            else if (key == ')') {
                if (i + 1 < n && s[i + 1] == ')') {
                    i++;  
                }
                else {
                    res++; 
                }

                if (!stc.empty()) {
                    stc.pop_back();
                }
                else {
                    res++; 
                }
            }
        }

        res += 2 * stc.size();

        return res;
    }
};
