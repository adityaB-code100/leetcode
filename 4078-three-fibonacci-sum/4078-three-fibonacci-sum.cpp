class Solution {
public:
    bool threeFibonacciSum(int n) {
        int c=0;
        int b=1;
        int a=1;

        while(a<=n){
            if(a+b+c==n){
                return true;
            }
            c=b;
            int temp=a;
            a=a+b;
            b=temp;

        }
        return false;
        
    }
};