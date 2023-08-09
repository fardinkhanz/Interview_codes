int pivotIndex(int* nums, int numsSize){

int sum=0;
for(int i=0;i<numsSize;i++)
    {
     sum+=nums[i];
    }

int leftsum=0;
for(int i=0;i<numsSize;i++)
    {
        if(leftsum==sum-leftsum-nums[i])
        {
            return i;
        }
     leftsum+=nums[i];
    }
    return -1;


}
