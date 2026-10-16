class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector temp = nums;
        for(size_t i = 0; i < nums.size();i++){
            for(size_t k = i+1; k < temp.size();k++){
                // cout << "i:" << i << " k:"<< k;
                if (nums[i] == temp[k]){
                    return true;
                }

            }
        }
        return false;
    }
};