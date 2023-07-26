int gcd( int a,int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}




char * gcdOfStrings(char * str1, char * str2){

    int flag=0,x,k=0,len1=strlen(str1),len2=strlen(str2);
    int gcdx=gcd(len1,len2);

    char* res=(char*)malloc((gcdx+1)*sizeof(char));
    strncpy(res,str1,gcdx);
    res[gcdx]='\0';
     for(int i=0;i<len1;i+=gcdx)
     {
         if(strncmp(str1+i,res,gcdx)!=0)
         {
             flag=1;
             break;
         }
     }
      for(int i=0;i<len2;i+=gcdx)
     {
         if(strncmp(str2+i,res,gcdx)!=0)
         {
             flag=1;
             break;
         }
     }
    if(flag==0)
     return res;
     else {
        free(res);
        return "";
        }

}
