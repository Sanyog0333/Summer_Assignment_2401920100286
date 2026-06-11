class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int bestmax = 0;
        int res_max = INT_MIN;
        for(int i=0; i<n; i++){
            int v1 = nums[i];
            int v2 = bestmax + nums[i];
            bestmax = max(v1 , v2);
            res_max = max(res_max , bestmax);
        }
        int res_min = INT_MAX;
        int bestmin = 0;
        int circ_max;
        int sum = accumulate(nums.begin() , nums.end() , 0);
        for(int i=0; i<n; i++){
            int v1 = nums[i];
            int v2 = bestmin + nums[i];
            bestmin = min(v1 , v2);
            res_min = min(res_min , bestmin);
        }
        circ_max = sum-res_min;
        if(res_max<0) return res_max;
        return max(circ_max , res_max);
    }
};