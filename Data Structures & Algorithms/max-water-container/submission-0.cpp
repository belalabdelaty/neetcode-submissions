class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            int temp = 0;
            for(int j = 0; j < heights.size(); j++){
                temp = abs(i-j) * min(heights[j], heights[i]);
                ans = max(temp,ans);
            }
        }
        return ans;
    }
};
