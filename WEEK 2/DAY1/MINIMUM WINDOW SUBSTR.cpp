MINIMUM WINDOW SUBSTR

class Solution {
public:

    bool correct(int have[] ,int needed[]){
        for(int i=0; i<256; i++){
            if(have[i]<needed[i]){
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        int res = INT_MAX;
        int low = 0;
        int n = s.size();
        int start=0;
        int needed[256]={0};
        int have[256]={0};

        for(char i : t){
            needed[i]++;
        }
        
        for(int high=0; high<n; high++){
            have[s[high]]++;
            while(correct(have,needed)){
                int len = high-low+1;
                if(res>len){
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX) return "";
        return s.substr(start,res);
    }
};