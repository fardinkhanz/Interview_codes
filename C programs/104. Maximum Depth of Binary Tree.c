/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    if(root==NULL)
    {
        return NULL;
    }

    int left_d=maxDepth(root->left);
    int right_d=maxDepth(root->right);


   return 1 + (right_d>left_d ? right_d:left_d);
}
