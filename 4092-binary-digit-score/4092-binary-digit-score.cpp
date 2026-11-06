class Solution {
public:
    int calculateScore(int a, int b) {
        int counta=0,countb=0;

        while(a>0){
            counta+=a&1;
            a=a>>1;
        }
         while(b>0){
            countb+=b&1;
            b=b>>1;
        }

        if(counta>=countb){
            return counta*countb;
        } 
            return countb/counta;
        }
    
};