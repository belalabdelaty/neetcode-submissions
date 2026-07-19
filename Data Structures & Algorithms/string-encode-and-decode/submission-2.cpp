class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(int i = 0; i < strs.size(); i++){
            s+=to_string(strs[i].size());
            s+='#';
            s+=strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> str;
        int i = 0;
        while(i < s.size()){
            int j = i;
            string len = "";
            while(s[j] != '#'){
            len+=s[j];
            j++;
            }
            int n = stoi(len);
            j++;
            string test="";
            for(int k = 0; k < n; k++){
                test+=s[k+j];
            }
            str.push_back(test);
            i=j+n;
            }
        return str;
    }
};
