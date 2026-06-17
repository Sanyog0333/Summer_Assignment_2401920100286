class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
    vector<int> res(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        // Remove all elements >= current element
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        res[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    return res;
    }
};