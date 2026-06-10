MAX PRODUCT SUBARRAY

class Solution {
public:
    int maxProduct(vector<int>& nums){
        int n = nums.size();
        int maxending = 1;
        int minending = 1;
        int res = INT_MIN;

        for(int i=0; i<n; i++){
            int v1 = nums[i];
            int v2 = maxending*nums[i];
            int v3 = minending*nums[i];
            maxending = max(v1 , max(v2,v3));
            minending = min(v1 , min(v2,v3));
            res = max(res, max(minending,maxending));
        }
        return res;
    }
};