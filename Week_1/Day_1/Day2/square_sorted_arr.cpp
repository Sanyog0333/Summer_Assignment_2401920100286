square_sorted_arr.cpp

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i]<0){
                b.push_back(nums[i]);
            }
            else{
                a.push_back(nums[i]);
            }
        }
        if(b.size()==0){
            for(int i=0;i<n;i++){
                nums[i] = nums[i]*nums[i];
            }
            return nums;
        }
        else if(a.size()==0){
            for(int i=0;i<n;i++){
                nums[i] = nums[i]*nums[i]; 
            }
            reverse(nums.begin() , nums.end());
            return nums;
        }
        else{
            
            int i=0;
            int j=0;
            int id=0;
            int m = a.size();
            int n = b.size();

            for(int i=0;i<m;i++){
                a[i] = a[i]*a[i]; 
            }

            for(int i=0;i<n;i++){
                b[i] = b[i]*b[i]; 
            }
            
            reverse(b.begin() , b.end());
            vector<int> res(m+n);

            while(i<m && j<n){
                if(a[i]<b[j]){
                    res[id] = a[i];
                    i++;
                    id++;
                }
                else{
                    res[id]=b[j];
                    j++;
                    id++;
                }
            }
            while(i<m){
                res[id]=a[i];
                id++;
                i++;
            }
            while(j<n){
                res[id]=b[j];
                id++;
                j++;
            }
            return res;
        }

    }
};