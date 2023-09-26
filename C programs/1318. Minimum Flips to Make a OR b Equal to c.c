

int minFlips(int a, int b, int c){
    int bit_a,bit_b,bit_c,flip=0;

    while( a>0 || b>0 || c>0)
    {
        bit_a=a&1;
        bit_b=b&1;
        bit_c=c&1;

        if(bit_c==0)
        {
            flip+=(bit_a + bit_b);
        }
        else
        {
            flip+=(bit_a==0 && bit_b==0 )? 1:0;
        }
        a>>=1;
        b>>=1;
        c>>=1;

    }
    return flip;

}
