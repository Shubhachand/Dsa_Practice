class Solution {
public:
        void subsequence(int i , vector<int>nums,vector<int>temp,vector<vector<int>>& ans){
            if(i == nums.size()){
                ans.push_back(temp); // ans only for printing
                return;
            }
            // 
            temp.push_back(nums[i]); // in temp we will store nums i value
            subsequence(i+1,nums,temp,ans);
            temp.pop_back();
              subsequence(i+1,nums,temp,ans);
            
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        int  i =  0;
        vector<vector<int>>ans;
        vector<int>temp;
        subsequence(i,nums, temp,ans);
        return ans;
    }
    
};