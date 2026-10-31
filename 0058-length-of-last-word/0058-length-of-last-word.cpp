class Solution {
public:
    int lengthOfLastWord(string s) {
        string res="";
        int l=0;
        for(auto ch:s){
            if(ch==' '){
                if(res!="")
                    l=res.size();
                res="";
            }else{
                res+=ch;
            }
        }
        if(res!=""){
            l=res.size();
        }

        return l;
    }
};