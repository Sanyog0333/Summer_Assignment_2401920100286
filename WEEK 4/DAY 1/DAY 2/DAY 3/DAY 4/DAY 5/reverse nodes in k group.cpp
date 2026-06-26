class Solution {
public:

     void reverse(ListNode* head , int times){
        ListNode* curr = head;
        ListNode* prev = 0;
        while(times--){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next; 
        }
        return;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* left = head;
        ListNode* right;
        ListNode* prevleft = 0;
        ListNode* res = 0;

        int s = k;
        if(head == 0){
                return 0;
            }

        while(true)
        {
            right = left;

            for(int i=0; i<(s-1); i++){
                if(right==0){
                  break;
                }
                right = right->next;
            }
            if(right){
                ListNode* nextleft = right->next;
                reverse(left,s);
                if(prevleft){
                    prevleft->next= right;
                }
                prevleft = left;
                if(res==0){
                    res = right;
                }
                left = nextleft;
            }
            else{
                if(prevleft){
                    prevleft->next = left;
                }
                if(res ==0){
                    res = left;
                }
                break;
            }
        }
        return res;

    }
};