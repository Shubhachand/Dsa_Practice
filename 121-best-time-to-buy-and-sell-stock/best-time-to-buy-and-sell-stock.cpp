class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int priceOfStock = prices[0];
        int n = prices.size();
        for (int i = 1; i < n; i++) {
            int cost = prices[i] - priceOfStock;
            profit = max(profit, cost);
            priceOfStock = min(priceOfStock, prices[i]);
        }
        return profit;
    }
};