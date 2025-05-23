class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        int i = 0 ; 
        string temp;
        int c = 0;
        while(i<s.size()){
            if(s[i]==' '){
           int pos =   temp[temp.size()-1] - '0' ;//2
           temp.pop_back();
           ans[pos] = temp;
           temp.clear();
           c++;
            }else{
                    temp+=s[i];
            }
            i++;
  
        }
        if (!temp.empty()) {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            c++;
        }
        string answer;
        for(int i = 1 ;i<=c;i++){
          
                answer+=ans[i];
                if (i != c) answer += ' ';
            
        }
        return answer;
    }
};