class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> stc;
        for(auto ch:s){
            if(stc.size()==0){
                stc.push_back(ch);
            }else{
                if(stc.back()==ch){
                    while(stc.size()!=0 && stc.back()==ch){
                        stc.pop_back();
                    }
                }else{
                    stc.push_back(ch);
                }
            }
        }


        string result="";
        for(auto ch:stc){
            result+=ch;
        }

        return result;
    }
};