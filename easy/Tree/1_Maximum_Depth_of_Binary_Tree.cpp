/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	int maxDepth(TreeNode* root) {
		return calculatedepth(root, 0);
	}
	int calculatedepth(TreeNode* curr, int depth) {
		int right_depth = 0;
		int left_depth = 0;
		if (curr == NULL) return depth;
		else {
			depth++;
			right_depth = calculatedepth(curr->right, depth);
			left_depth = calculatedepth(curr->left, depth);
			if (right_depth < left_depth) return left_depth;
			return right_depth;
		}
	}


};