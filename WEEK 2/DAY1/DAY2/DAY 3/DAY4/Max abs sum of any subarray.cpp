class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int ending = 0;
        int resmax = INT_MIN;
        for(int i=0; i<n; i++){
            int v1 = nums[i];
            int v2 = ending + nums[i];
            ending = max(v1 , v2);
            resmax = max(resmax, ending);
        }
        int summax = abs(resmax);
        int ends = 0;
        int resmin = INT_MAX;
        for(int i=0; i<n; i++){
            int v1 = nums[i];
            int v2 = nums[i]+ends;
            ends = min(v1,v2);
            resmin = min(resmin , ends);
        }
        int summin = abs(resmin);
        return max(summin , summax);
    }
};