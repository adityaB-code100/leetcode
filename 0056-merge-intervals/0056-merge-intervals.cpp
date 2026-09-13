class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        int n = intervals.size();

        if (n <= 1) {
            return intervals;
        }

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        int left = 0;

        for (int right = 1; right < n; right++) {

            // Overlapping
            if (intervals[left][1] >= intervals[right][0]) {
                intervals[left][1] = max(intervals[left][1], intervals[right][1]);
            }
            
            else {
                result.push_back(intervals[left]);
                left = right;
            }
        }

        result.push_back(intervals[left]);

        return result;
    }
};