class Solution {
public:
void removeDupes(int i , vector<int>& nums,vector<int>& temp,set<vector<int>>&ans){
    if(i == nums.size()){
        ans.insert(temp);
        return;
    }
    temp.push_back(nums[i]);
    removeDupes(i+1,nums,temp,ans);
    temp.pop_back();
    removeDupes(i+1,nums,temp,ans);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          sort(nums.begin(), nums.end());
        vector<int>temp;
        set<vector<int>> ans;
        removeDupes(0,nums,temp,ans);
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};