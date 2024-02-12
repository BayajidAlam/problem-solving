class Solution {
public:
    bool kSmaller(int n, int m, int x, int k){
        int cnt = 0;
        int num = x / m;
        cnt += m*num;
        for(int i=num; i<n; i++){
            cnt += x/(i+1);
        }
        return cnt >= k;
    }

    int findKthNumber(int m, int n, int k) {
        int low = 0;
        int high = m * n;
        int mid,res;

        while(low < high){
            mid = low + (high - low)/2;

            if(kSmaller(n,m,mid,k)) high = mid;
            else low = mid + 1;
        }

        return low;
    }
};