class Solution {
public:
    int trap(vector<int>& height) {
       vector<int> st(height.size(),0),nd(height.size(),0);
       int ans = 0;
       for(int i = 0; i < height.size(); i++){
        if(i == 0){
            st[i] =height[i];
            continue;
        }
        st[i] = max(height[i], st[i-1]);
       }
       for(int i = height.size()-1; i > 0; i--){
        if(i == height.size()-1){
            nd[i] = height[i];
            continue;
        }
        nd[i] = max(height[i], nd[i+1]);
       }
       for(int i = 0; i < height.size(); i++){
        if(st[i] == 0 or nd[i] == 0) continue;
        if(height[i] > min(st[i], nd[i])) continue; 
        ans+=min(st[i],nd[i]) - height[i];
       }
       return ans;
    }
};
