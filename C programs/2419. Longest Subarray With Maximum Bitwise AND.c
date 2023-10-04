int longestSubarray(int* nums, int numsSize){
   long int len=0,maxlen=0,max=0;
    for(int i=0; i<numsSize;i++){
      if(nums[i]==nums[max]){
          maxlen=(maxlen>++len)?maxlen:len;
      }
      else if(nums[i]>nums[max]){
          len=1;
          max=i;
          maxlen=1;

      }
      else{
          len=0;
      }

    }
    return maxlen;

}
