class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string, vector<string>> ans;
     vector<vector<string>> answer;
     for(int i = 0; i < strs.size(); i++){
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        ans[temp].push_back(strs[i]);
     }
     for(auto it:ans){
        answer.push_back(it.second);
     }
     return answer;
    }
};
