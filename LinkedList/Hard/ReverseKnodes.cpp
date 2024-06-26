
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prevNode = nullptr ;
        ListNode* temp = head ;

        while(temp != nullptr){
            if(!kNode(temp , k)){
                if(prevNode)
                    prevNode->next = temp ;
                break ;
            }

            ListNode* nex = kNode(temp , k)->next ;

            ListNode* h = reverse(temp , k) ;
            
            if(!prevNode)
                head = h ;
            else
                prevNode->next = h ;
            
            prevNode = kNode(h , k) ;

            temp = nex ;

        }

        return head ;
    }

    ListNode* reverse(ListNode* head , int k ){
        ListNode* temp = head ;
        ListNode* old = nullptr ;
            ListNode* nex = temp->next ;

        while(temp && k != 0){
            ListNode* nex = temp->next ;
            temp->next = old ;
            old = temp ;
            temp = nex ;
            k-- ;
        }
        return old ;
    }

    ListNode* kNode(ListNode* head , int k){
        ListNode* temp = head ;
        k-- ;
        while(temp && k > 0){
            temp = temp->next ;
            k-- ;
        }
        
        return temp ;
    }

};