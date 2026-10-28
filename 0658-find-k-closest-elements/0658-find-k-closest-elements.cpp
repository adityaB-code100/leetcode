class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        int pos = binary(arr, x);
        int left = pos - 1;
        int right = pos;

        vector<int> res;

        while (res.size() < k) {
            if (left < 0) {
                res.push_back(arr[right]);
                right++;
            }
            else if (right >= n) {
                res.insert(res.begin(), arr[left]);
                left--;
            }
            else if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                res.insert(res.begin(), arr[left]);
                left--;
            }
            else {
                res.push_back(arr[right]);
                right++;
            }
        }

        return res;
    }

    int binary(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};