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
	bool hasCycle(ListNode *head) {
		while (head != NULL) {
			head->val = NULL;
			head = head->next;
			if (head != NULL && head->val == NULL) return true;
		}
		return false;
	}
};