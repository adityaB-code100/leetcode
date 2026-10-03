class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=1;i<n;i++){

            for(int j=0;j<n;j++){
            int temp1=INT_MAX,temp2=INT_MAX;
            if (j>0){
                temp1=matrix[i-1][j-1];
            }
            if(j+1<n){
                temp2=matrix[i-1][j+1];
            }
            matrix[i][j]+=min(temp1,min(matrix[i-1][j],temp2));

        }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,matrix[n-1][i]);
        }

        return mini;
    }
};