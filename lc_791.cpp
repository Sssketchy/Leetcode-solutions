class Solution {
public:
    string customSortString(string order, string s) {//cba abcd
        std::vector<int> freq(26, 0);
        std::string result;

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (char c : order) {
            while (freq[c - 'a']-- > 0) {
                result += c;
            }
        }

        for (char c = 'a'; c <= 'z'; ++c) {
            while (freq[c - 'a']-- > 0) {
                result += c;
            }
        }

        return result;
    
    
    }
};