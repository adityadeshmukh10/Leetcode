class Solution {
public:
    void inorder(TreeNode* root, vector<int>& vt) {
        if (!root) return;
        inorder(root->left, vt);
        vt.push_back(root->val);
        inorder(root->right, vt);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vt;
        inorder(root, vt);
        return vt;
    }
};
