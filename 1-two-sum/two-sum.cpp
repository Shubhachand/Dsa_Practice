class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // map<int,int>mpp;

        // for(int i = 0 ;i < nums.size();i++){
        //     int a = nums[i];
        //     int b = target - a;
            
        //     if(mpp.find(b)!= mpp.end()){
        //         return {mpp[b], i};

        //     }
        //      mpp[a] = i;
        // }
        // return {};
        vector<pair<int,int>>p;
         for(int i = 0; i < nums.size(); i++) {
            p.push_back({nums[i], i});
        }
        sort(p.begin(),p.end());
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<e){
            int sum = p[s].first + p[e].first;
            if(sum == target){
                return {p[s].second,p[e].second};
            }else if(sum<target){
                s++;
            }else{
                e--;
            }
        }
        return {0,0};
    }
};