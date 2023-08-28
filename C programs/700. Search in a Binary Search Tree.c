/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val){
struct TreeNode* res;
    if(!root)
    {
        return NULL;
    }

    if(val<root->val)
    {
     res = searchBST(root->left,val);
    }
    else if(val>root->val)
    {
       res = searchBST(root->right,val);

    }
    else
    {
        return root;
    }
    return res;

}
