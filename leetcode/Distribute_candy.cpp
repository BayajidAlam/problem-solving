class Solution {
public:
    int distributeCandies(vector<int>& v) {
        sort(v.begin(),v.end());
        int diff = 1;
        for(int i=1; i<v.size(); i++){
            if(diff == v.size()/2){
                return diff;
            }
            if(v[i] > v[i-1]){
                diff++;
            }
        }
        return diff;
    }
};
