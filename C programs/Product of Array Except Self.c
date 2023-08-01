/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int* ans=(int*)malloc(numsSize*sizeof(int));
    int temp=1;
    for(int i=numsSize-1;i>=0;i--)
    {
        ans[i]=temp;
        temp*=nums[i];
    }
    temp=1;
for(int i=0;i<numsSize;i++)
    {
        ans[i]*=temp;
        temp*=nums[i];
    }


    *returnSize=numsSize;
    return ans;

}
