class Solution {
public:

    bool fun(unordered_map<char,int> need,
        unordered_map<char,int> have){
            for(auto i:need){
                char c = i.first;
                int needf = i.second;
                int havef = have[c];
                if(havef<needf){
                    return false;
                }
            }
            return true;
        }

    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();

        unordered_map<char,int> need;
        unordered_map<char,int> have;
        for(int i=0; i<n; i++){
            need[ransomNote[i]]++;
        }

        for(int i=0; i<m; i++){
            have[magazine[i]]++;
        }

        return fun(need,have);

    }
};