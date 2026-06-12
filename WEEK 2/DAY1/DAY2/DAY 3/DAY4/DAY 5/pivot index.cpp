class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int sum = accumulate(nums.begin() , nums.end() ,  0);
        if(sum - nums[0] == 0) return 0;
        for(int i=1; i<n; i++){
            left = left + nums[i-1];
            right = sum - left - nums[i];
            if(left == right){
                return i;
            }
        }
        return -1;
    }
};