class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        if(s.size() >= 3){
            int third_idx = s.size() - 3;
            auto third_max = next(s.begin(),third_idx);
            return *third_max;
        }
        return *--s.end();
    }
};