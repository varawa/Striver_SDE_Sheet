#include<bits/stdc++.h>

using namespace std ;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* one, ListNode* two) {
        if (!one) return two;
        if (!two) return one;

        if (one->val > two->val) 
            swap(one, two);

        ListNode* head = one; 
        while (one != nullptr && two != nullptr) {
            ListNode* temp = nullptr;
            while (one != nullptr && one->val <= two->val) {
                temp = one;
                one = one->next;
            }
            temp->next = two;
            swap(one, two);
        }
        return head;
    }
};