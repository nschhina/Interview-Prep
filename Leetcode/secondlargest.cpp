class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> S;
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            TreeNode* curr = Q.front();
            Q.pop();
            S.insert(curr->val);
            if (curr->left) { Q.push(curr->left); }
            if (curr->right) { Q.push(curr->right); }
        }
        if (S.size() < 2) { return -1; }
        set<int>::iterator it = S.begin();
        it++;
        return *it;

    }
};
