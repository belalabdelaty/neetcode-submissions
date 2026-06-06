class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq( nums.size() + 1);
        for(int it:nums){
            count[it]++;
        }
        for(auto it:count){
            freq[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i = freq.size()-1; i > 0; i--){
            for(int i:freq[i]){
                ans.push_back(i);
                if(ans.size() == k) {
                    return ans;
                }
            }
        }
        return ans;
    }
};
