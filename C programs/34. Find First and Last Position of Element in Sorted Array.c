/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize=2;
    int* ans = (int*)malloc(2*sizeof(int));
    ans[0]=ans[1]=-1;
    if(numsSize==0){

        return ans;
    }

    int left=0, right=numsSize-1,i=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(target==nums[mid]){
            ans[0]=mid;
            right=mid-1;

          }
          else if(target>nums[mid]){
              left=mid+1;

          }else if(target<nums[mid]){
              right=mid-1;

          }

    }
   right = numsSize-1;
        while(left<=right){
        int mid=left+(right-left)/2;
        if(target==nums[mid]){
            ans[1]=mid;
            left=mid+1;

          }
          else if(target>nums[mid]){
              left=mid+1;

          }else if(target<nums[mid]){
              right=mid-1;

          }

    }
return ans;

}
