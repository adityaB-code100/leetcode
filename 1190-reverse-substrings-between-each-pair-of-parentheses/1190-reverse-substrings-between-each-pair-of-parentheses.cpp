class Solution {
public:
    string reverseParentheses(string s) {
        vector <int> stc;
        vector<vector<int>> q;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stc.push_back(i);
            }else if (s[i]==')'){
                q.push_back({stc.back(),i});
                stc.pop_back();
            }

        
        }
        sort(q.begin(), q.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] > b[0];
        });
        for(auto temp:q){
            reverse(s.begin() + temp[0]+1, s.begin() + temp[1]);
        }
        cout<<s;
        string result="";
        for(int i=0;i<n;i++){
           if(s[i]==')' || s[i]=='('){
            continue;
           }
           result+=s[i];
        
        }
        return result;
    }
};