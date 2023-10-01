/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int* res=(int*)malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;
     for(int i=0;i<numsSize;i++){
         for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]>nums[j]){
               int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }


        }
    }
    for(int i=0;i<numsSize;i++){
         for(int j=i+1;j<numsSize;j++)
        {
            if(!(nums[j]&1)){
               int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }


        }
    }
return nums;
}
