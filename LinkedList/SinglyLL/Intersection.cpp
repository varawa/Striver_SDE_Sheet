
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headB ; 
        ListNode* temp2 = headA ; 
        
        if(length(headA) > length(headB)){
            temp1 = headA ;
            temp2 = headB ;
        }
        
        while(length(temp1) != length(temp2)){
            temp1 = temp1->next ;
        }

        while(temp1 && temp2){
            if(temp1 == temp2)  return temp1 ;

            temp1 = temp1->next ;
            temp2 = temp2->next ;
        }

        return nullptr ;
    }

    int length(ListNode* head){
        int count = 0 ;
        while(head){
            count++ ;
            head = head->next ;
        }

        return count ;
    }
};