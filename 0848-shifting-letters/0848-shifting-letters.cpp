class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        for(int i=n-2;i>-1;i--){
            shifts[i]=(shifts[i]+shifts[i+1])%26;
            cout<<shifts[i]<<endl;
        }
        for(int i=0;i<n;i++){
            s[i] = (char)('a' + (s[i] - 'a' + shifts[i]) % 26);
        }

        return s;
    }
};