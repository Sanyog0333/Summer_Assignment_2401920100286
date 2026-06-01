Remove_Dup_From_Sort-arr.cpp

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int cm = 1;
         int officer = 0;
         int res=1;
         int n = nums.size();
         while(cm<n){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            nums[officer+1]=nums[cm];
            officer++;
            res++;
            cm++;
         }
         return res;
    }

};