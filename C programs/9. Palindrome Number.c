bool isPalindrome(int x){
    int temp=x;
    long int ans=0;
    while(x>0)
    {
        int rem=x%10;
        ans=ans*10+rem;
        x/=10;
    }
return (temp==ans)?true:false;

}
