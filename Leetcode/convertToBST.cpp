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
    TreeNode* sortedArrayToBSTHelper(std::vector<int> nums, int lo, int hi) {
    if (lo == hi) {
      return nullptr;
    }
    int mid = (lo + hi) / 2;
    TreeNode* ret = new TreeNode(nums[mid]);
    ret->left = sortedArrayToBSTHelper(nums, lo, mid);
    ret->right = sortedArrayToBSTHelper(nums, mid + 1, hi);
    return ret;
  }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedArrayToBSTHelper(nums, 0, nums.size());
  }
};
