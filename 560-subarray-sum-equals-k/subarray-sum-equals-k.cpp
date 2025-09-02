class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<long long,int> preSum;
        preSum[0] = 1; // base case
        long long sum = 0;
        int count = 0;

        for(int i = 0 ; i <nums.size() ;i++ ){
            sum+=nums[i];
             long long rem = sum - k;
           
           if (preSum.find(rem) != preSum.end()) {
                count += preSum[rem];
            }
            preSum[sum]++;
        }
         return count;
    }
};