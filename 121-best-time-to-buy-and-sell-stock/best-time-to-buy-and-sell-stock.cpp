class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell ,maxi = 0;
    int n = prices.size();
        for(int i = 1;i<n;i++){
            if(prices[buy]<prices[i]){
                maxi = max(maxi,(prices[i] - prices[buy]));
                    

            }else{
                buy=i;
            }
        }
        return maxi;
    }
};