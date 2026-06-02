class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int Sum = 0;

        for(int i = 0; i < k; i++){
            Sum += nums[i];
        }

        int maxSum = Sum; //storing sum

        for(int i = k; i < nums.size(); i++){
            Sum += nums[i];   //next element sum after starting kth elements
            Sum -= nums[i-k];    // add incoming element or substract outgoing element

            maxSum = max(maxSum , Sum);
        }

        return (double)maxSum / k;
    }
};
