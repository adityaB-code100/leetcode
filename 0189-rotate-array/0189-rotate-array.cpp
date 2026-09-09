class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        swap(nums,0,nums.size()-1);
        swap(nums,0,k-1);
        swap(nums,k,nums.size()-1);

        // return nums;
        
    }

    void swap(vector <int>&arr,int i,int j){
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            i++;
            j--;
        }
    }
};