// 1st approach with TLE 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0; i< sz-1; i++){
            for(int j= i+1; j<=sz-1; j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

// optimized
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};