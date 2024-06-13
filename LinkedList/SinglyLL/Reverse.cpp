
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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head ;
        ListNode* old = nullptr ;
        
        while(temp != nullptr){
            ListNode* temp1 = temp->next ;
            temp->next = old ;
            old = temp ;
            temp = temp1 ;
        }
        
        return old ;
    }
};