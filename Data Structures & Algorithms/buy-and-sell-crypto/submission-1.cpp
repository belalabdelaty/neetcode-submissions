class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur = prices[0], ans = 0;
        for(int i = 0; i < prices.size(); i++){
            if(cur > prices[i]){
                cur = prices[i];
            }
            if(cur < prices[i]){
                ans = max(ans, prices[i] - cur);
            }
        }
        return ans;
    }
};
