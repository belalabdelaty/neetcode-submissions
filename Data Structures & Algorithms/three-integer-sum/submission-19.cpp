class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
       sort(nums.begin(), nums.end());
       for(int i = 0 ; i < nums.size(); i++) {
       if(i > 0 and nums[i-1] == nums[i]) continue;
        int l = i+1, r = nums.size()-1;
        while(l<r){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum == 0){ans.push_back({nums[l], nums[r], nums[i]}); l++;r--;
            
                    // Skip duplicate second elements
                    while (l < r && nums[l] == nums[l - 1])
                        l++;

                    // Skip duplicate third elements
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
            }
            else if(sum> 0) r--;
            else if(sum < 0) l++;

        }
       }
       return ans;
    }
};
