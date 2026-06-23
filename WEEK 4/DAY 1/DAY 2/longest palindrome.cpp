class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        int n = s.size();
        int res = 0;
        int odd = false;

        for(int i=0; i<n; i++){
            f[s[i]]++;
        }
        for(auto i:f){
            int val = i.second;
            if(val%2==0){
                res += val;
            }
            else{
                odd = true;
            }
        }
        
        if(odd == false){
            return res;
        }

        for(auto i:f){
            int val = i.second;
            if(val%2==1){
                res += val-1;
            }
            
        }
            return res+1;

        }
};