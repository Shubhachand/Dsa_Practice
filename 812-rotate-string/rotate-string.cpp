class Solution {
public:
    string check(string& s) {
        string ans = s;
        // int
        for (int i = 0; i < s.size(); i++) {
            s[i] = ans[i + 1];
        }

        s[s.size() - 1] = ans[0];
        cout << s;
        return s;
    }
    bool rotateString(string s, string goal) {
        int end = s.size();
        int start = 0;
        while (start < end) {
            string ans = check(s);
            if (ans == goal)
                return true;
            // else return false;
            start++;
        }

        return false;
    }
};