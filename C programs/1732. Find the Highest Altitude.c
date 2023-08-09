int largestAltitude(int* gain, int gainSize){
    int temp=0,i,max=0;
    for(i=0;i<gainSize;i++)
    {
        temp+=gain[i];

        max = (max>temp) ? max:temp;
    }
return max;

}
