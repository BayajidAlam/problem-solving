class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        set<vector<int>> st;
        vector<vector<int>> output;
        
        // getting TLE with this 
        // for(int i=0; i<n-2; i++){
        //     for(int j=i+1; j<n-1; j++){
        //         for(int k=j+1; k<n; k++){
        //             if((nums[i] + nums[j] + nums[k] == 0) && i!=j && j!=k && k!=i){
        //                 st.insert({nums[i],nums[j],nums[k]});
        //             }
        //         }
        //     }
        // }

        for(int i=0; i<n-2;i++){
            int target = -nums[i];
            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum == target){
                    st.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        for(auto it: st){
            output.push_back(it);
        }
        return output;
    }
};