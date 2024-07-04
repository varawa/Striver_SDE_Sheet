
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* end = head->next ;
        ListNode* start = head ;

        int sum = 0 ;

        while(end){
            if(end->val == 0){
                end->val = sum ;
                sum = 0 ;
                start->next = end ;
                start = start->next ;
            }else{
                sum += end->val ;
            }
            end = end->next ;
        }
        return head->next ;
    }
};