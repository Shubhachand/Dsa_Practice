class Solution {
public:
    string sortVowels(string s) {
        vector<char> ans;
        char x;
        for (int i = 0; i < s.size(); i++) {
            x = s[i];
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                // if vowel then check capital or small and then sort them in
                // order;
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(), ans.end());
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            x = s[i];
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                // if vowel then check capital or small and then sort them in
                // order;
                s[i] = ans[j++];
            }
        }
        return s;
    }
};