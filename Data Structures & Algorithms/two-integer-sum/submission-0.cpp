class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if(mp.count(complement)) {
                vector<int> res = {mp[complement], i};
                sort(res.begin(), res.end());  // ensure sorted output
                return res;
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};