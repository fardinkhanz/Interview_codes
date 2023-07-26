int peakIndexInMountainArray(int* arr, int arrSize){

int right=arrSize-1, left=0;
while(left<right)
{
    int mid=left+(right-left)/2;

    if(arr[mid]<arr[mid+1])
    {
        left=mid+1;
    }
    else
    {
       right=mid;
    }
}
return left;
}
