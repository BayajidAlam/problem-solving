class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        int n = nums.size();
        int size = pow(2,n);

        vector<vector<int>> v;

        for(int i=0; i<size; i++){
            vector<int> tmp;
            for(int j=0; j<n; j++){
                if(i & (1 << j)){
                    tmp.push_back(nums[j]);
                }
            }
            v.push_back(tmp);
        }

        return v;
    }
};