class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        int oc=0;
        int cc=0;
        string s="";
        backtrack(n,s,result,oc,cc);
        return result;

    }
    void backtrack(int n,string &s,  vector<string> &result,int &oc,int &cc){
        if(oc==n and cc==n){
            result.push_back(s);
            return;
        }

        if(oc<n){
            s=s+'(';
            oc+=1;
            backtrack(n,s,result,oc,cc);
            s.pop_back();
            oc-=1;
        }

        if(cc<n and cc<oc){
            s=s+')';
            cc+=1;
            backtrack(n,s,result,oc,cc);
            s.pop_back();
            cc-=1;
        }
    }
};