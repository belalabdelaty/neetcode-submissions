class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, n = nums.size() - 1;
        while(s<=n){
            int md = (s+n) / 2;
            if(nums[md] > target){
                n = md - 1;
            }
            else if( nums[md] < target) {
                s = md+1;
            }
            else {
                return md;
            }
        }
        return -1;
    }
};
