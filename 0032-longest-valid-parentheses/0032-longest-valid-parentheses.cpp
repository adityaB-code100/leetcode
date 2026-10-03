class Solution {
public:
    int longestValidParentheses(string s) {
        int oc = 0, cc = 0, maxi = 0;

        // Left -> Right
        for (char c : s) {
            if (c == '(')
                oc++;
            else
                cc++;

            if (oc == cc)
                maxi = max(maxi, 2 * cc);

            // Too many closing brackets
            if (cc > oc) {
                oc = 0;
                cc = 0;
            }
        }

        oc = 0;
        cc = 0;

        // Right -> Left
        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            char c = *it;

            if (c == '(')
                oc++;
            else
                cc++;

            if (oc == cc)
                maxi = max(maxi, 2 * oc);

            // Too many opening brackets
            if (oc > cc) {
                oc = 0;
                cc = 0;
            }
        }

        return maxi;
    }
};