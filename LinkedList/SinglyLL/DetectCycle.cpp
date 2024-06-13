
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head ;

        if(head == nullptr || head->next == nullptr)
            return false ;
        
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast != nullptr && fast->next != nullptr ){
            fast = fast->next->next ;
            slow = slow->next ;
            
            if(fast == slow) return true ;
        }
        
        return false ;

    }

};