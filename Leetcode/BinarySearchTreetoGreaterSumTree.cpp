static int csum = 0, cnt = 0;

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) return root;
        cnt++;
        TreeNode* nr =  bstToGst(root->right);
        cnt--;
        root->val += csum;
        csum = root->val;
        cnt++;
        TreeNode* nl =  bstToGst(root->left);
        cnt--;
        if(cnt==0) csum=0;
        return root;
    }
};
