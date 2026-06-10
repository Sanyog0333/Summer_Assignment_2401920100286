MAX SUBARRAY

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int v1;
        int v2;
        int bestending = 0;
        int res = INT_MIN; 
        int n = nums.size();

        for(int i=0; i<n; i++){
            v1 = bestending + nums[i];
            v2 = nums[i];
            bestending = max(v1,v2);
            res = max(res,bestending);
        }
        return res;
    }
};