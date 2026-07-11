class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int n = height.size();
        
        // Correctly sized vectors
        vector<int> st(n, 0), nd(n, 0);
        int ans = 0;
        
        // Fix 1: Set base case for index 0
        st[0] = height[0];
        for(int i = 1; i < n; i++){
            st[i] = max(height[i], st[i-1]);
        }
        
        // Fix 2: Set base case for the last index and fix loop boundary (n-2)
        nd[n-1] = height[n-1];
        for(int i = n - 2; i >= 0; i--){
            nd[i] = max(height[i], nd[i+1]);
        }
        
        // Fix 3: Remove the flawed 'continue' conditions
        for(int i = 0; i < n; i++){
            ans += min(st[i], nd[i]) - height[i];
        }
        
        return ans;
    }
};
