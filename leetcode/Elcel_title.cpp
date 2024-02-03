class Solution {
public:
    string convertToTitle(int n) {
        string s = "";
        while(n > 0){
            n--;
            int a = n % 26;
            s += (a+'A');
            n /= 26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};