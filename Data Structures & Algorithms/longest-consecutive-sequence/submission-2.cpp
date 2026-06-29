class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            int next = nums[i] + 1, len = 1;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == next) {
                    next++;
                    len++;
                }
            }
            ans = max(ans, len);
        }
    
    return ans;
    }
};
