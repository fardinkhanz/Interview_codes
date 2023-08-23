/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int DFS(struct TreeNode* node,int max)
{
    if(!node)
    {
        return 0;
    }
    int good=0;
    if(max <= node->val)
    {
        good++;
        max=node->val;
    }

    good+=DFS(node->left,max);
    good+=DFS(node->right,max);


    return good;
}


int goodNodes(struct TreeNode* root){

return DFS(root,root->val);
}
