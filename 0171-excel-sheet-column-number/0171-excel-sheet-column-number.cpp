class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0; 
        
        for (char c : columnTitle) {
            int charValue = c - 'A' + 1;
            result = result * 26 + charValue;
        }
        
        return result;
    }
};