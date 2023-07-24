/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int* sol=(int*)malloc(2 * sizeof(int));
    int temp=0,temp1=0,i,j;
    *returnSize = 2;
    for(i=0;i<numsSize;i++)
    {
        temp=nums[i];
        for(j=i+1;j<numsSize;j++)
    {
        temp1=temp+nums[j];
        if(temp1==target)
        {
            sol[0]=i;
            sol[1]=j;
            return sol;
        }
        else
        {
            temp1=0;
        }
    }


    }
    sol[0]=-1;
    return sol;



}
