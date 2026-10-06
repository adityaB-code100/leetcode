class Solution {
public:
    string largestOddNumber(string num) {
        
        string result="";
        int idx=-1;

        for(int i=num.size()-1;i>=0;i--){
            int n=(int)(num[i]);
            if(n%2==1){
                idx=i;
                break;
            } 
        }
        if(idx==-1){
            return result;
        }

        for(int i=0;i<idx+1;i++){
            result+=num[i];
        }

        return result;
    }
};