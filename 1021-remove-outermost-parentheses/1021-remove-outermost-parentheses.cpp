class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        string result="";

        for(auto ch:s){
            if(ch=='('){
                if(open>0){
                    result+=ch;
                }
                open+=1;
            }else{
                open-=1;

                if(open>0){
                    result+=ch;
                }
            }
        }

        return result;
    }
};