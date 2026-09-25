class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        int sum=0;
        for(int i=n-1;i>-1;i--){
            shifts[i]=(shifts[i]+sum)%26;
            sum=shifts[i];
            s[i] = (char)('a' + (s[i] - 'a' + shifts[i]) % 26);
         }
        // for(int i=0;i<n;i++){
           
        // }

        return s;
    }
};