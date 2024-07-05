#include<bits/stdc++.h>

using namespace std ;

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res(2 , -1) ;
        
        ListNode* prev = head ;
        ListNode* curr = head->next ;

        int ind = 0 ;

        int prev_ind = -1 ;
        int curr_ind = 0 ;

        while(curr->next){
            if((curr->next->val > curr->val && prev->val > curr->val) || (curr->next->val < curr->val && prev->val < curr->val)){
                if(prev_ind == -1){
                    ind = curr_ind ;
                }else{
                    res[1] = curr_ind - ind ;
                    res[0] = (res[0] == -1)? res[0] = curr_ind - prev_ind : min(res[0] , curr_ind - prev_ind) ;
                }
                prev_ind = curr_ind ;
            }
            curr_ind++ ;
            curr = curr->next ;
            prev = prev->next ;
        }
        
        return res ;
    }
};