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
    int kthSmallest(TreeNode* root, int k) {
        helper(root);
        sort(list.begin(),list.end());
        return list[k-1];
    }
private:
    void helper(TreeNode* root){
        if(root==nullptr) return;
        helper(root->left);
        list.push_back(root->val);
        helper(root->right);
    }
    vector<int> list;
};
