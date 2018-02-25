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
    ListNode* reverseList(ListNode* head) {
        if( head == NULL || head->next == NULL) return head;
        struct ListNode* prev = head;
        struct ListNode* curr = prev->next;
        struct ListNode* tmp = curr->next;
        
        prev->next = NULL;
        curr->next = prev;
        
        while(tmp != NULL){
            prev = curr;
            curr = tmp;
            tmp = tmp->next;
            curr->next = prev;
        }
        
        return curr;
    }
};
