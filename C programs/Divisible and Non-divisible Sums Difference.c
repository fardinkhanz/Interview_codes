int differenceOfSums(int n, int m) {
    int sum=0,sum2=0;
    for(int i=1;i<=n;i++){
        if(i % m!=0){
            sum+=i;
        }
        else{
            sum2+=i;
        }
    }
    return sum-sum2;

}
