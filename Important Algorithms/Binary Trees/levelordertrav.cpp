// Complexity Space- O(N) Time- O(N)
class Solution{
  public:
    void levelOrderTraversal(TreeNode& root){
      if(!root) return;
      queue<TreeNode*> store;
      store.push(root);
      while(!store.empty()){
        cout << store.front()->val;
        if(store->left!=nullptr) store.push(store->left);
        if(store->right!=nullptr) store.push(store->right);
        store.pop();
      }
    }
}
