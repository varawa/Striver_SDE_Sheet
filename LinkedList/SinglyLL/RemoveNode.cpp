
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head ;
        int count = 1 ;

        if(!head->next && n == 1 || !head)
            return nullptr ;
            
        while(temp->next != nullptr){
            temp = temp->next ;
            count++ ;
        }

        int check = count - n ;
        temp = head ;
        ListNode* prev = temp ;

        if(check == 0)
            return head->next ;
        
        while(check > 0){
            prev = temp ;
            temp = temp->next ;
            check-- ;
        }
        prev->next = temp->next ;

        return head ;
    }
};