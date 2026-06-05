max consecutive ones |||

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0;
        int n = nums.size();
        int res = 0;
        int count = 0;
        
        for(int high=0; high<n; high++){
            if(nums[high]==0){
                count++;
            }
            while(count>k){
                if(nums[low]==0){
                    count--;
                }
                low++;
            }
            int len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
}; 