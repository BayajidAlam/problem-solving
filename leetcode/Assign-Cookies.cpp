
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // let's sort both of them first
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        // Assume both initial index is 0
        int index = 0;
        int cnt = 0;
        while (index < s.size() && cnt < g.size()) {
            if (s[index] >= g[cnt]) {
                cnt++;
            }
            index++;
        }
        return cnt;
    }
};
