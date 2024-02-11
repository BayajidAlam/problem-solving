class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i < n){
            if(nums[i] == i + 1){
                i++; 
                continue;
            }
            if(nums[i] <= 0 || nums[i] > n){
                i++;
                continue;
            }
            int idx_1 = i;
            int idx_2 = nums[i] - 1;
            if(nums[idx_1] == nums[idx_2]){
                i++;
                continue;
            }
            swap(nums[idx_1],nums[idx_2]);
        }
        for(int j=0; j<n; j++){
            if(nums[j] != j+1){
                return j+1;
            }
        }
        return n+1;
    }
};