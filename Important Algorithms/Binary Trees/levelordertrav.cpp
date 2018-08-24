// Complexity Space- O(N) Time- O(N)
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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> answer;
      vector<int> currlevel;
      if(!root){
          return answer;
      }
      queue<TreeNode*> store;
      store.push(root);
      store.push(NULL);
      while(!store.empty()){
        TreeNode* temp=store.front();
        store.pop();
        if(temp==nullptr) {
            answer.push_back(currlevel);
            currlevel.clear();
            if(!store.empty()) store.push(NULL);
        }
        else{
            currlevel.push_back(temp->val);
            if(temp->left!=nullptr) store.push(temp->left);
            if(temp->right!=nullptr) store.push(temp->right);
        }
      }
        return answer;
    }
};
