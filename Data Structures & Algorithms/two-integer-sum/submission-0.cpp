class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(size_t i = 0; i < nums.size(); i++){
            for(size_t k = i+1; k < nums.size(); k++){
                if((nums[i] + nums[k])==target){
                    result.push_back(i);
                    result.push_back(k);
                    break;
                }
            }
        }

        return result;
    }
};
