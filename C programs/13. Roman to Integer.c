int romanToInt(char * s){
    int roman[26];
    roman['I'-'A']=1;
    roman['V'-'A']=5;
    roman['X'-'A']=10;
    roman['L'-'A']=50;
    roman['C'-'A']=100;
    roman['D'-'A']=500;
    roman['M'-'A']=1000;

    int total=0,prev=0,value=0;
    int n=strlen(s);
   for(int i = n - 1; i >= 0; i--){
       value=roman[s[i]-'A'];
       if(prev>value){
           total-=value;
       }
       else{
           total+=value;
       }
       prev=value;

    }

    return total;

}
