class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return tolower(c);});
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' and s[i] <= 'z' ) or (s[i] >= '0' and s[i] <= '9')) continue;
            else {
                s.erase(i,1);
            }
        }
        int startt = 0, endd = s.length()-1;
        while(endd > startt){
            if(s[startt]!=s[endd]) {
                return false;
            }
            startt++;
            endd--;
        } 
    return true;
    }
};
