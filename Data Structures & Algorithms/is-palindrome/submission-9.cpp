class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return tolower(c);});
        int startt = 0, endd = s.length()-1;
        if(startt==endd) return true;
        while(endd > startt){
            if((s[startt] < 'a' or s[startt] > 'z' ) and (s[startt] < '0' or s[startt] > '9')) {startt++;}
            if((s[endd] < 'a' or s[endd] > 'z' ) and (s[endd] < '0' or s[endd] > '9')) {endd--;}
            if(endd<=startt) break;
            if(s[startt]!=s[endd]) {
                return false;
            }
            startt++;
            endd--;
        } 
    return true;
    }
};
