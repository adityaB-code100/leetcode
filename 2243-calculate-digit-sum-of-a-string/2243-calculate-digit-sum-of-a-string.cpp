
class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k) {
            string temp = "";
            string slice = "";

            for(int i = 0; i < s.size(); i++) {
                slice += s[i];

                if(slice.size() == k) {
                    temp += sum(slice);
                    slice = "";
                }
            }

            if(slice.size() > 0) {
                temp += sum(slice);
            }

            s = temp;
        }

        return s;
    }

    string sum(string s) {
        int ans = 0;

        for(char ch : s) {
            ans += ch - '0';
        }

        return to_string(ans);
    }
};
