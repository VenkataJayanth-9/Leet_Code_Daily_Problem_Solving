class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int totalProfit = 0;
        for(int i = 0; i<size-1; i++){
            int maxProfit = 0;
            if(prices[i]<prices[i+1]){
                maxProfit = prices[i+1]-prices[i];
                totalProfit += maxProfit;
            }
        }
        return totalProfit;
    }
};