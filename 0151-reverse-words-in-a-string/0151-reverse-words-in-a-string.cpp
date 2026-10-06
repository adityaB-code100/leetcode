class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        string result = "";
        string word = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                word += s[i];
            }
            else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end());
                    result += word;
                    result += ' ';
                    word = "";
                }
            }
        }

        // Add last word
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            result += word;
        }

        if (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};