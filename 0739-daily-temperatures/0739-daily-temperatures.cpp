class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();
        vector<int> answer(n, 0);
        vector<int> stc;

        for (int i = 0; i < n; i++) {

            while (!stc.empty() && temperatures[i] > temperatures[stc.back()]) {
                // cout<<temperatures[i]<<temperatures[stc.back()]<<i<<endl;
                int Previous = stc.back();
                stc.pop_back();

                answer[Previous] = i - Previous;
            }

            stc.push_back(i);
        }

        return answer;
    }
};