void moveZeroes(int* nums, int numsSize){
    int temp=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[temp]=nums[i];
            temp++;
        }

    }

     for(int i=temp;i<numsSize;i++)
     {
         nums[i]=0;
     }

    return nums;

}
