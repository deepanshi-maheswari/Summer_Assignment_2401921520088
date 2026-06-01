class Solution {
public:
    void maxProfitFinder(vector<int>& prices, int i, int& min_price, int& max_profit){
        //base case
        if(i >= prices.size()){
            return;
        }

        //sol for one case
        if(prices[i] < min_price){
            min_price = prices[i];
        }
        int todaysProfit = prices[i] - min_price;
        if(todaysProfit > max_profit){
            max_profit = todaysProfit;
        }

        //RE
        maxProfitFinder(prices, i+1, min_price, max_profit);
    }
    
    int maxProfit(vector<int>& prices) {
        int n =  prices.size();

        int min_price = INT_MAX;
        int max_profit = INT_MIN;
        maxProfitFinder(prices, 0, min_price, max_profit);
        return max_profit;
    }
};
