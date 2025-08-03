class Solution {
public:
    long max(long a, long b){
        if(a>b) return a;
        return b;
    }
    int maxFrequency(vector<int>& nums, int k) {

        // sort(nums.begin(),nums.end());

        // int l = 0; int r = 0; int res = 0; int total = 0;

        // while(r < nums.size()){
        //     total += nums[r];

        //     while(nums[r] * (r-l-1) > total + k){
        //         total -= nums[l];
        //         l++;
        //     }
        //     res = max(res , r-l+1);
        //     r++;
        // } 
        
        // return res;

        sort(nums.begin(), nums.end());
        long long left = 0, total = 0;
        int res = 0;

        for (int right = 0; right < nums.size(); ++right) {
            total += nums[right];

            // Total cost to make all elements in window equal to nums[right]
            while ((long long)nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];
                left++;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};