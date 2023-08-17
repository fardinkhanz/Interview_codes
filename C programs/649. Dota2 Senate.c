char * predictPartyVictory(char * senate){
    int i,Rbck=-1,Dbck=-1,Rfrnt=0,Dfrnt=0,n=strlen(senate),Ridx=0,Didx=0;
    int Rque[10001],Dque[10001];
    if(n==1)
    {
        if(senate[0]=='R')
        {
            return "Radiant";
        }
        else
        {
            return "Dire";

        }

    }
    for(i=0;i<n;i++)
    {
        if(senate[i]=='R')
        {   Rbck++;
            Rque[Rbck]=i;

        }
        else
        { Dbck++;
            Dque[Dbck]=i;


        }

    }
    while(Rfrnt<=Rbck && Dfrnt<=Dbck)
    {
        Ridx=Rque[Rfrnt];
        Didx=Dque[Dfrnt];

         if(Ridx<Didx)
         {   Rbck = (Rbck + 1) % (2 * n);
             Rque[Rbck]=Ridx + n;

         }
         else
         {
             Dbck = (Dbck + 1) % (2 * n);
             Dque[Dbck]=Didx + n;

         }
       Rfrnt = (Rfrnt + 1) % (2 * n);
        Dfrnt = (Dfrnt + 1) % (2 * n);

    }

    return (Rbck >= Dbck) ? "Radiant" : "Dire";

}
