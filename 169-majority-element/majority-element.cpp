class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>mp;

        // for(int i = 0 ; i < nums.size();i++){
        //     mp[nums[i]]++;

        // }

        // int ans = 0;
        //   for (auto it = mp.begin(); it != mp.end(); it++) {
        //     if (it->second > nums.size()/2) {

        //         ans = it->first;
        //     }
        // }

        // return ans;
        int c = 0;
        int el;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (c == 0) {
                c = 1;
                el = nums[i];
            } else if (nums[i] != el) {
                c--;
            } else {
                c++;
            }
        }
        int c1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el)
                c1++;
        }

        if (c1 > n / 2) {
            return el;
        }
        return -1;
    }
};