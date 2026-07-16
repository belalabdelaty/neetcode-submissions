
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = 1;
        for(int i = 0; i < piles.size(); i++)
        {
            mx = max(mx, (piles[i]));
        }
        int l = 1, r = mx, ans = 0;

        while(l<=r){
            int cnt = 0;
            int mid = (l+r)/2;
            for(int j = 0; j < piles.size(); j++){
                cnt+= ceil(double(piles[j])/mid);
            }
            if(cnt <= h){
                r = mid-1;
                ans = mid;
            }
            else {
                l = mid+1;
            };
        }
        return ans;
    }
};
