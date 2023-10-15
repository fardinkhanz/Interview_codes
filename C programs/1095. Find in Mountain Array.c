/**
 * *********************************************************************
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * *********************************************************************
 *
 * int get(MountainArray *, int index);
 * int length(MountainArray *);
 */

 int peakInd(MountainArray* mountain,int l, int r){
     while(l<r){
         int mid=l+(r-l)/2;
         if(get(mountain,mid)<get(mountain,mid+1)){
             l=mid+1;
         }
         else{
             r=mid;
         }
     }
     return l;
 }

 int left(MountainArray* mountain,int l, int r,int target){
     while(l<r){
         int mid=l+(r-l)/2;
         if(get(mountain,mid)<target){
             l=mid+1;
         }
         else{
             r=mid;
         }
     }
     return l;
 }

int right(MountainArray* mountain,int l, int r,int target){
     while(l<r){
         int mid=l+(r-l)/2;
         if(get(mountain,mid)>target){
             l=mid+1;
         }
         else{
             r=mid;
         }
     }
     return l;
 }
int findInMountainArray(int target, MountainArray* mountainArr) {
    int n=length(mountainArr);
    int peak=peakInd(mountainArr,0,n-1);
    int leftidx=left(mountainArr,0,peak,target);
    if(get(mountainArr,leftidx)==target)
       return leftidx;
    int rightidx=right(mountainArr,peak+1,n-1,target);
    if(get(mountainArr,rightidx)==target)
       return rightidx;

       return -1;

}
