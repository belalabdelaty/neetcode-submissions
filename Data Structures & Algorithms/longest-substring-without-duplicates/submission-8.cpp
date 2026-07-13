class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, l = 0, r = 0;
        map<char,int> cnt;
        for(int i = 0; i < s.size(); i++){
            if(cnt[s[i]] != 1){
                r++;
                cnt[s[i]]++;
            }
            else if(cnt[s[i]] == 1){
                cnt[s[i]]++;
                while(cnt[s[i]] > 1){
                    cnt[s[l]]--;
                    l++;
                }
            }
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};
