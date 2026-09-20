class Solution {
public:
    int reverseDegree(string s) {
        
        int n=s.size();

        int sum=0;
        for(int i=0;i<n;i++){
            int temp=('z'-s[i])+1;
            sum+=temp*(i+1);
        }
    

    return sum;
}
};