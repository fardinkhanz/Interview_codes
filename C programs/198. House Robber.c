int rob(int* nums, int numsSize){
   if(numsSize==0)
   {
       return 0;
   }
   else if(numsSize==1)
   {
       return nums[0];

   }
   int cur=nums[0],skip=0;
   for(int i=1;i<numsSize;i++)
   {
       int newcur=nums[i]+skip;
       int newskip=(cur>skip)?cur:skip;

       cur=newcur;
       skip=newskip;
   }
   return (cur>skip)?cur:skip;


}
