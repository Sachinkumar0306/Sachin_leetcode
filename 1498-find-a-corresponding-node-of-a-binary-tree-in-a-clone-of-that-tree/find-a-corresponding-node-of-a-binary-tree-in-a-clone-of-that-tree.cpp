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
TreeNode*  ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned==nullptr) return nullptr;
        if(cloned->val==target->val)
        {
            ans=cloned;
        }
        getTargetCopy(original,cloned->left,target);
                getTargetCopy(original,cloned->right,target);
                return ans;
    }
};