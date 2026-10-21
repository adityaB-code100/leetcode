/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return dfs(root,sum,targetSum);
    }
    bool dfs(TreeNode* node,int &sum,int target){
        if(node==nullptr){
            return false;
        }
        sum+=node->val;
        if(sum==target && node->left==nullptr && node->right==nullptr){
            return true;
        }
        bool left=dfs(node->left,sum,target);
        if(left){
            return true;
        }
        bool right=dfs(node->right,sum,target);
        if(right){
            return true;
        }
        sum-=node->val;
        return false;
    }
};