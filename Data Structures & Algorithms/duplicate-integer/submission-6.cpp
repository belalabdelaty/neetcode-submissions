class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> appears;
        for(int i = 0; i < nums.size(); i++){
            if(appears[nums[i]]==2) return true;

            appears[nums[i]]++;

            if(appears[nums[i]]==2) return true;
        }
        return false;
    }
};