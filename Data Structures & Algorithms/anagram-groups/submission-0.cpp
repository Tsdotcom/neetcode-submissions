class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, int> group_idx;
        for(int i=0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end()); 
            if(group_idx.find(temp) == group_idx.end()){
                group_idx[temp] = result.size();
                result.push_back({});
            }
            result[group_idx[temp]].push_back(strs[i]);
        }

        return result;
    }
};
