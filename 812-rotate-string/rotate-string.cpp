class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string add = s+s;
        if(add.find(goal)!=string::npos) return true;

        return false;
    }
};