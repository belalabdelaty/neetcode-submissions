class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>> answer;
     vector<bool> visited(strs.size(), false);
    

     for(int i = 0 ; i < strs.size(); i++){
        if (visited[i]) continue;
        vector<string> group;
        group.push_back(strs[i]);
        for(int j = i+1; j < strs.size(); j++){

            string parent = strs[i];
            sort(parent.begin(), parent.end());

            string child = strs[j];
            sort(child.begin(), child.end());

            if(parent == child) {
                group.push_back(strs[j]);
                visited[j] = true;
            }

        }
        answer.push_back(group);
     }

     return answer;

    }
};
