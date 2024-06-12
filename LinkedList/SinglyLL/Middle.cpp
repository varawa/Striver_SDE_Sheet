
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head ;
        int count = 0 ;

        if(head->next == nullptr)
            return head ;

        while(temp != nullptr){
            temp = temp->next ;
            count++ ;
        }
        temp = head ;
        int mid = count/2 ;
        
        for(int i = 0 ; i < mid ; i++){
            temp = temp->next ;
        }
        head = temp ;

        return head ;
    }
};