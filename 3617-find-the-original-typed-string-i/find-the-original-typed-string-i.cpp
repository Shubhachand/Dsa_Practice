class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;  // There is always at least one possible original string
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] == word[i - 1]) {
                ++count;  // Adjacent duplicate adds another possibility
            }
        }
        return count;
    }
};
