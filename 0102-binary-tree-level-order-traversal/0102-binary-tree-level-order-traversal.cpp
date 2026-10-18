
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if (root == nullptr) {
            return res;
        }

        queue<TreeNode*> pq;
        pq.push(root);

        while (!pq.empty()) {
            int n = pq.size();
            vector<int> curr;

            for (int i = 0; i < n; i++) {
                TreeNode* temp = pq.front();
                pq.pop();

                curr.push_back(temp->val);

                if (temp->left != nullptr) {
                    pq.push(temp->left);
                }

                if (temp->right != nullptr) {
                    pq.push(temp->right);
                }
            }

            res.push_back(curr);
        }

        return res;
    }
};
