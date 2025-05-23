class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> check(26,0);
        for(char ch : sentence){
            check[ch - 'a'] = 1;
        }

        for(int ans : check){
            if(ans==0){
                return false;            }
        }
        return true;
    }
};