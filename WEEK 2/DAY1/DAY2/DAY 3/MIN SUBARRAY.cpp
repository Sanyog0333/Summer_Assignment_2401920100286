MIN SUBARRAY

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int v1=0;
        int v2=0;
        int bestending = 0;
        int res = INT_MAX; 
        int n = a.size();

        for(int i=0; i<n; i++){
            v1 = bestending + a[i];
            v2 = a[i];
            bestending = min(v1,v2);
            res = min(res,bestending);
        }
        return res;
    }
};