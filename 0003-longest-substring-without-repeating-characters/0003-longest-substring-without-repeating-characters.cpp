
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        unordered_map<char, int> mp;

        int j = 0;

        for(int i = 0; i < s.size(); i++) {
            char temp = s[i];

            while(mp[temp] == 1) {
                mp[s[j]] = 0;
                j++;
            }

            mp[temp] = 1;

            maxi = max(maxi, i - j + 1);
        }

        return maxi;
    }
};
