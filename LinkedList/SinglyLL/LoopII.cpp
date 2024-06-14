
 // Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode* fast = head ;
        
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next ;
            slow = slow->next ;
            if(fast == slow){
                break ;
            }
        }
        if(fast == nullptr || fast->next == nullptr)
            return nullptr ;
        
        slow = head ;
        while(slow != fast){
            slow = slow->next ;
            fast = fast->next ;
        }

        return fast ;
    }
};