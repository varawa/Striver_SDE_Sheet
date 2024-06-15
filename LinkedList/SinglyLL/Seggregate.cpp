
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
            return head ;

        ListNode* odd = head ;
        ListNode* ev = head->next ;
        ListNode* headev = ev ;
        
        ListNode* temp = head->next->next ;
        int count = 1 ;
        while(temp != nullptr){
            if(count%2 != 0){
                odd->next = temp ;
                odd = odd->next ;
            }
            if(count%2 == 0){
                ev->next = temp ;
                ev = ev->next ;
            }
            temp = temp->next ;
            count++ ;
        }
        
        ev->next = nullptr ;
        odd->next = headev ;

        return head ;
    }
};