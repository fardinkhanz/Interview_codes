int maxArea(int* height, int heightSize){
    int max=0,temp,left=0,right=heightSize-1;


    while(left<right)
    {
        temp = (right-left) * (height[left]<height[right] ? height[left] : height[right]);

        max = (temp>max ? temp : max);

        if(height[left]<height[right])
        {
            left++;
        }
        else
        {
            right--;

        }
    }

    return max;


}
