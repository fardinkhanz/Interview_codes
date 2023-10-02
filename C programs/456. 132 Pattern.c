bool find132pattern(int* nums, int numsSize){
int min_arr[numsSize];
min_arr[0]=nums[0];

for(int i=1;i<numsSize;i++){
    min_arr[i]=(nums[i]<min_arr[i-1])?nums[i]:min_arr[i-1];
}

int stack[numsSize];
int top=-1;

for(int j=numsSize-1;j>=0;j--){
    if(nums[j]>min_arr[j]){
        while(top>=0 && stack[top]<=min_arr[j]){
            top--;
        }

        if(top>=0 && stack[top]<nums[j]){
            return true;
        }
        stack[++top]=nums[j];
    }

}
return false;
}
