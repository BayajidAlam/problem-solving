class Solution {
public:
    int lengthOfLastWord(string str) {
       int sz = str.size() - 1;
        int cnt = 0;

        while (sz >= 0 && str[sz] == ' ') {
            sz--;
        }

        for ( ; sz >= 0; sz--) {
            if (str[sz] == ' ' && cnt != 0) {
                return cnt;
            }
            cnt++;
        }

        return cnt;
    }
};