
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;

        if (root == nullptr) {
            return result;
        }

        dfs(result, root, "");
        return result;
    }

    void dfs(vector<string>& res, TreeNode* node, string path) {

        path += to_string(node->val);

        // Leaf node
        if (node->left == nullptr && node->right == nullptr) {
            res.push_back(path);
            return;
        }

        path += "->";

        if (node->left != nullptr) {
            dfs(res, node->left, path);
        }

        if (node->right != nullptr) {
            dfs(res, node->right, path);
        }
    }
};
