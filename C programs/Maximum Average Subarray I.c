double findMaxAverage(int* nums, int numsSize, int k){
    double avg=0,max=-10000;
    int i,j;
for(i=0;i<k;i++)
    {
        avg+=nums[i];
    }
    max=avg/k;

  for(i=k;i<numsSize;i++)
    {
        avg+=nums[i] - nums[i-k];
        if(max<avg/k)
        {
            max=avg/k;
        }

    }
    return max;

}
