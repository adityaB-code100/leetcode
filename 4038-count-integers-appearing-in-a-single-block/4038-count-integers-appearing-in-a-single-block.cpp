class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        // Store frequency of each number
        unordered_map<int, int> frequency;

        // Store first position of each number
        unordered_map<int, int> first;

        // Store last position of each number
        unordered_map<int, int> last;

        // Go through the array
        for (int i = 0; i < nums.size(); i++) {

            int x = nums[i];

            // Increase frequency
            frequency[x]++;

            // If this is the first time we see x
            if (first.find(x) == first.end()) {
                first[x] = i;
            }

            // Update last position
            last[x] = i;
        }

        int count = 0;

        // Check every distinct number
        for (auto item : frequency) {

            int x = item.first;

            int freq = frequency[x];
            int firstPosition = first[x];
            int lastPosition = last[x];

            // Check whether all occurrences are together
            if (lastPosition - firstPosition + 1 == freq) {
                count++;
            }
        }

        return count;
    }
};