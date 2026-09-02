class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> my_map;

        for(char c:s){
            my_map[c]++;
        }


        for(int i=0;i<s.size();i++){
            char c=s[i];
            if (my_map[c]==1){
                return i;
            }
        }
        return -1;
    }
};