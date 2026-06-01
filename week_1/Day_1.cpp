//question 1: Two Sum
vector<int> twoSum(vector<int>& nums, int target) {
        int i ;
        unordered_map < int , int > mp;

        for(i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            
            if(mp.find(complement) != mp.end()){
                return {mp[complement] , i};
            }
          
            mp[nums[i]] = i;
        }
  
            return {};
  }


//question 2: Remove Duplicates from sorted Array
int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
        if(n == 0) return 0;

        int i = 0;

        for(int j = 1; j < n; j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1; 
    }


//question 3: Best Time to Buy and Sell Stock
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
