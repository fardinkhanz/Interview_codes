char * reverseWords(char * s){
    int n=strlen(s),i=0,j=0,tmp=0;
    char *s1=(char*)malloc((n+1)*sizeof(char)) ;
    while(i<=n){


        if(s[i]==' ' || s[i]=='\0'){

            for(int k=tmp;k<i;k++){
                s1[j++]=s[i-(k-tmp)-1];
            }
            if(s[i]==' ')
              s1[j++]=' ';
          tmp=i+1;

        }
         i++;



    }
    s1[j]='\0';
    return s1;
}
