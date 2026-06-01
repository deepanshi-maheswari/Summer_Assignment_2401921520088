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
