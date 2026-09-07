class Solution {
public:
    int distinctSubseqII(string s) {
        
const long long MOD = 1e9 + 7;
        long long last[26]={};

        long long dp=1;
        for(auto str:s){
            int temp=str-'a';

            long long newdp=(2*dp-last[temp]+MOD)%MOD;
            last[temp]=dp;
            dp=newdp;

        }

        return (dp-1+MOD)%MOD;
    }
};