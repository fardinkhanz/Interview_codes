/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxLevelSum(struct TreeNode* root){

if(!root)
{
    return root;
}
struct TreeNode* queue[10001];
int front=0,rear=0,curlvl=1,resultlvl=0,max=INT_MIN;
queue[rear++]=root;
while(front < rear)
{
    int lvlsum=0;
    int lvlsize=rear-front;

    for(int i=0;i<lvlsize;i++)
    {
        struct TreeNode* node=queue[front++];

        lvlsum+=node->val;

        if(node->left)
        {
            queue[rear++]=node->left;
        }

        if(node->right)
        {
            queue[rear++]=node->right;
        }
    }
        if(max < lvlsum)
        {
            max=lvlsum;
            resultlvl=curlvl;
        }
        curlvl++;



}
return resultlvl;

}
