class Solution {
public:
    void sumII(int idx, int target, vector<int>&arr, vector<int>&temp,
               vector<vector<int>>& ans) {
       
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for(int i =idx;i<arr.size();i++ ){
            if(i>idx && arr[i]== arr[i-1]) continue;
            if(arr[i]>target) break;
             temp.push_back(arr[i]);
            sumII(i + 1, target - arr[i], arr, temp, ans);
            temp.pop_back();
        }

        // sumII(i + 1, target,arr, temp, ans);
    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        sumII(0, target, candidates, temp, ans);
        return ans;
    }
};