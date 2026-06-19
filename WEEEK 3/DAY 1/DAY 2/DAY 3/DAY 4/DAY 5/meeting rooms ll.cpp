class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        int n = start.size();
        int i = 0;
        int j = 0;
        int res = 0;
        int room = 0;
        sort(start.begin() , start.end());
        sort(end.begin() , end.end());
        
        while(i<n){
            if(start[i]<end[j]){
                room++;
                res = max(res,room);
                i++;
            }
            else{
                room--;
                j++;
            }
            
        }
        return res;
    }
};
