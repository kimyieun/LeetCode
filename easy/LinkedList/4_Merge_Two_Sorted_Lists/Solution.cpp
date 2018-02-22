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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* head = NULL;
        ListNode* curr = NULL;
        ListNode* tmp1 = NULL;
        ListNode* tmp2 = NULL;
        
        if(l1->val < l2->val){
            head = l1;
            curr = l1;
            tmp1 = l2;
        }
        else{
            head = l2;
            curr = l2;
            tmp1 = l1;
        }
        
        while(curr->next != NULL && tmp1 != NULL){
            if(curr->next->val > tmp1->val){
                tmp2 = tmp1;
                tmp1 = curr->next;
                curr->next = tmp2;
                cout<<curr->val<<endl;
            }
            curr = curr->next;
        }
        if(tmp1 != NULL) curr->next = tmp1;
        return head;
    }
};
