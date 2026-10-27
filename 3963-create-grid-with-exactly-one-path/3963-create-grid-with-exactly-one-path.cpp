class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res;
        string str=".";
        for(int i=1;i<n;i++){
            str+="#";
        }
        for(int j=0;j<m-1;j++){
            res.push_back(str);
        }
        str="";
        for(int i=0;i<n;i++){
            str+=".";
        }
          res.push_back(str);

          return res;
    }
};