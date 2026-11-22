class Solution {
public:
    bool checkString(string s) {
        bool flag=true;

        for(auto c:s){
            if(c=='b'){
                flag=false;
            }else if(c=='a' && flag==false){
                return false;
            }
        }
        return true;
    }
};