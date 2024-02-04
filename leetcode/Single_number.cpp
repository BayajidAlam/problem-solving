class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n == 1){
             return nums[0];
        }
        for(int i=0; i<n-1; i += 2){
            if(nums[i] != nums[i+1]){
                return nums[i];
            }
            if(nums[n-1] != nums[n-2]){
                return nums[n-1];
            }
        }
        return 0;
    }
};