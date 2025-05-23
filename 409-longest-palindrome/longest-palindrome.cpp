class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        // s = "abccccdd"
        int count = 0;
        bool isOdd = false;
        for(int i =0; i < s.size();i++){
                if(s[i]>='a'){
                    lower[s[i]-'a']++;
                }else{
                    upper[s[i]-'A']++;
                }
        }
        for(int i = 0 ; i < 26;i++){
            if(lower[i]%2!=0){
                count+=lower[i]-1;
                isOdd = true;
            }else{
                count+=lower[i];
            }
             if(upper[i]%2!=0){
                count+=upper[i]-1;
                isOdd = true;
            }else{
                count+=upper[i];
            }

            
        }
        if(isOdd){
            count++;
        }
        return count;
    }
};