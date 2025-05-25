class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>map;
    int count =0;
        for(int i = 0 ; i < words.size();i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(map[rev]>0){
                count+=4;
                map[rev]--;
            }else{
              map[words[i]]++;
            }
        }
        for(auto &it : map){
            string word = it.first;
            int counts = it.second;
            if(word[0]==word[1] && counts>0){
                count+=2;
                break;
            }
        }
        return count;
    }
};