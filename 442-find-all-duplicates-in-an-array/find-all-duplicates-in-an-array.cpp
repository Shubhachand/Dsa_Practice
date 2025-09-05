class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i = 0 ; i < nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // vector<int>ans;
        // for(auto it : mp){
        //         if(it.second>1){
        //                 ans.push_back(it.first);
        //         }
                
        // }

        vector<int>ans;

        for(int i = 0 ; i < nums.size();i++){
            int idx = abs(nums[i]) - 1;
            if(nums[idx]<0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[idx] = -nums[idx];
            }

        }
        return ans;
    }
};