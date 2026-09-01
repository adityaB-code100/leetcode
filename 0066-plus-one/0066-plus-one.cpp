class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i =digits.size()-1;i>-1;i--){
            if (digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
          
        }
          
            digits.insert(digits.begin(),1);
          

        return digits;
    }

  
};