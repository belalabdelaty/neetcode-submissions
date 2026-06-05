class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string , vector<string>> ans;
     vector<vector<string>> answer;
     for(int i = 0; i < strs.size(); i++){
        int freq[26] = {0};
       for(int j = 0; j < strs[i].size(); j++){
        freq[strs[i][j] - 'a']++;
        }
        string s = "";
        char c = 'a';
        for(int i = 0 ; i < 26; i++){
            s+=to_string(freq[i])+c;
            c++;
       }  
        ans[s].push_back(strs[i]);
     }


     for(auto it:ans){
        answer.push_back(it.second);
     }
     return answer;
    }
};
