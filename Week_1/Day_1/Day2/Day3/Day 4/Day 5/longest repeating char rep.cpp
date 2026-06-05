longest repeating char rep

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int low = 0;
        int arr[256];
        int res =0;
        //int num = arr.size();

        for(int high=0; high<n; high++){
            arr[s[high]]++;
            int len = high-low+1;
            int mx = *max_element(arr,arr+256);
            int diff = abs(mx-len);

            while(diff>k){
                arr[s[low]]--;
                low++;
                len = high-low+1;
                mx = *max_element(arr,arr+256);
                diff = abs(mx-len);
            }
            len = high-low+1;
            res = max(res , len);
        }
        return res;
    }
};