/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 void dfs(struct TreeNode* root,int left,int lenght,int* max)
 {
     if(!root)
     {
         return;
     }
     *max=(*max > lenght) ? *max : lenght;
     if(left)
     {
         dfs(root->right,0,lenght+1,max);
         dfs(root->left,1,1,max);

     }
     else
     {
         dfs(root->left,1,lenght+1,max);
         dfs(root->right,0,1,max);
     }



 }

int longestZigZag(struct TreeNode* root){
    if(!root)
    {
        return NULL;
    }

int max=0;
    dfs(root,1,0,&max);
    dfs(root,0,0,&max);

    return max;

}
