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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head ;
        ListNode* old = nullptr ;
        stack<int> stk ;

        while(temp != nullptr){
            stk.push(temp->val) ;
            temp = temp->next ;
        }
        temp = head ;
        while(!stk.empty()){
            if(stk.top() != temp->val) return false ;
            stk.pop() ;
            temp = temp->next ;
        }
        return true ;
    }
};