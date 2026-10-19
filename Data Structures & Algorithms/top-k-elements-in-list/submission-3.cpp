class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> counter;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            counter[nums[i]]++;
        }
        vector<pair<int,int>> sorted_counter(counter.begin(), counter.end());
        sort(sorted_counter.begin(), sorted_counter.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++){
            result.push_back(sorted_counter[i].first);
        }
        return result;
    }
};
