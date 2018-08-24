// Complexity Space- O(1) Time- O(N)
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
     void preOrder(TreeNode* root) {
        if(root==nullptr) return;
        cout << root->val << endl;
        preOrder(root->left);
        preOrder(root->right);
     }
 };
