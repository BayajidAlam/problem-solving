class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            nums[i]*=nums[i];
        }
        int left=0,right=n-1,index=n-1;
        while(left<=right) {
            if(nums[left]>=nums[right]) {
                result[index]=nums[left];
                left++;
            }
            else {
                result[index]=nums[right];
                right--;
            }
            index--;
        }
        return result;
    }
};