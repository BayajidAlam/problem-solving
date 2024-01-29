class Solution {
public:
    void reverseString(vector<char>& st) {
        int j = st.size() - 1;
        for(int i=0; i<st.size()/2; i++){
            char tmp = st[i];
            st[i] = st[j];
            st[j] = tmp;
            j--;
        }
    }
};