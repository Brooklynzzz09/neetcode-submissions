class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(val.contains(diff)){
            return {val[diff],i};
            }
            else{
                val[nums[i]] = i;
            }
        }
        return {1};
    }

};
