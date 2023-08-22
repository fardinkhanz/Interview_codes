/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */



 void DFS(struct TreeNode* node,int* idx,int* leafvalue)
 {
     if(!node)
     {
         return;
     }
     if(!node->left && !node->right)
     {
         leafvalue[(*idx)++]=node->val;
         return;
     }

     DFS(node->left,idx,leafvalue);
     DFS(node->right,idx,leafvalue);
 }



bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2){

    int leafvalue1[200], leafvalue2[200];
    int idx1=0,idx2=0;

    DFS(root1,&idx1,leafvalue1);
    DFS(root2,&idx2,leafvalue2);

    if(idx1!=idx2)
    {
        return false;
    }

    for(int i=0;i<idx1;i++)
    {
        if(leafvalue1[i]!=leafvalue2[i])
        {
            return false;
        }
    }

return true;
}
