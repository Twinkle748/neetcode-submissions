class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = INT_MAX;
        int profit = 0;

        for(int i=0;i<prices.size();i++){
            p = min(p,prices[i]);
            profit = max(profit,prices[i]-p);
        }
        return profit;

        

    }
};
