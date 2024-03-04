#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int score = 0;
        int maxScore = 0;
        int left = 0;
        int right = n - 1;

        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left];
                left++;
                score++;
                maxScore = max(maxScore, score);
            } else if (score > 0) {
                power += tokens[right];
                right--;
                score--;
            } else {
                break;
            }
        }

        return maxScore;
    }
};

