class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int num_ln = nums.size();
        int q_ln = queries.size();

        sort(nums.begin(),nums.end());
        int sum = 0;
        vector<int>pre_sum;

        for(int i=0; i<num_ln; i++){
            sum += nums[i];
            pre_sum.push_back(sum);
        }

        vector<int> ans(q_ln,0);
        for(int i=0; i<q_ln; i++){
            for(int j=0; j<num_ln; j++){
                if(pre_sum[j] <= queries[i]){
                    ans[i] = j+1;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};