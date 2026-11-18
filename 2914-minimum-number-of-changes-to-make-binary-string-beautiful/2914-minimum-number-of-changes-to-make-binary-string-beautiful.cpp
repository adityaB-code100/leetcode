class Solution {
public:
    int minChanges(string s) {
        int count=0;

        for(int i=1;i<s.size();i=i+2){
            if(s[i-1]!=s[i]){
                count+=1;
            }
        }
        return count;
    }
};