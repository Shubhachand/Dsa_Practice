class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
     
        }
       
        int ans = 0;
          for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > nums.size()/2) {
                
                ans = it->first;
            }
        }

        return ans;
    }
};