class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int oc=0;

        for(auto ch:s){
            if(ch=='('){
                oc+=1;
            }
            else if(ch==')'){
                if(oc>0){
                    oc--;
                }else{
                    count+=1;
                }

            }
        }

        return count+oc;
    }
};