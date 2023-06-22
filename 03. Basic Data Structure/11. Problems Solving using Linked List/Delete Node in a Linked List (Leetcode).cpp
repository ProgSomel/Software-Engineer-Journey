/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       int deletedValue = node->next->val;
       ListNode *deletedNode = node->next;
       node->next=  node->next->next;
       delete deletedNode;
       node->val = deletedValue;
    }
    
};