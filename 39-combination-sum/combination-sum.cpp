class Solution {
public:
    void sum(int i, int target, vector<int>& arr, vector<int>& temp,
             vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);

            return;
        }
        if (i == arr.size())
            return;

        if (arr[i] <= target) {
            temp.push_back(arr[i]); // store the element in ans vector
            sum(i, target - arr[i], arr, temp, ans);
            temp.pop_back();
        }
        sum(i + 1, target, arr, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int index = 0;
        vector<vector<int>> ans;
        vector<int> temp;
        sum(index, target, candidates, temp, ans);
        return ans;
    }
};