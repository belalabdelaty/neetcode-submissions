class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp.insert(nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(!mp.count(nums[i] - 1)){
                int len = 0;
                while(mp.count(nums[i] + len)){
                    len++;
                }
                ans = max(len,ans);
            }
            
        }
        return ans;
    }
};
