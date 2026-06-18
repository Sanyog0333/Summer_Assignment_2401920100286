class Solution {
public:
    string removeDuplicates(string s, int k) {
    stack<pair<char,int>> st;
    string res = "";
    int n  = s.size();

    for(int i=0; i<n; i++){
        char c = s[i];
        if(!st.empty() && st.top().first == c){
            st.top().second++;
        } else {
            st.push({c,1});
        }

        if(st.top().second == k){
            st.pop();
        }
    }

    while(!st.empty()){
        auto p = st.top();
        st.pop();
        res = string(p.second, p.first) + res;
    }

    return res;
}
};