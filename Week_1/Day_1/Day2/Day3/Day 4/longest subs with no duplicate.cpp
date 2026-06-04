longest subs with no duplicate

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0;
        int res = 0;
        unordered_map<char , int> freq;

        for(int high=0; high<n; high++){
            freq[s[high]]++;
            int k = high-low+1;

            while(freq.size()<k){
                freq[s[low]]--;
                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }
                low++;
                k = high-low+1;
            }
            res = max(res, high-low+1);
        }
        return res;
    }
};