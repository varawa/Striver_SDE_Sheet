
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
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middle(head) ;
        ListNode* end = rev(mid) ;
        ListNode* start = head ;

        while(end && start){
            if(start->val != end->val)
                return false ;
            
            start = start->next ;
            end = end->next ;
        }

        return true ;
        
    }

    ListNode* rev(ListNode* head){
        ListNode* temp = head ;
        ListNode* old = nullptr ;

        while(temp != nullptr){
            ListNode* nex = temp->next ;
            temp->next = old ;
            old = temp ;
            temp = nex ;
        }
        return old ;
    }

    ListNode* middle(ListNode* head){
        ListNode* fast = head ;
        ListNode* slow = head ;

        while(fast && fast->next){
            fast = fast->next->next ;
            slow = slow->next ;
        }
        return slow ;
    }
};
