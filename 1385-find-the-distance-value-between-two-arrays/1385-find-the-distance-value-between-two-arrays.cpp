class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=arr1.size();

        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                // cout<<(arr1[i]-arr2[j])<<endl;
                if(abs(arr1[i]-arr2[j])<=d){
                    count-=1;
                    break;
                }
            }
        }
        return count;
    }
};