int maxProfit(int* prices, int pricesSize, int fee){
    int sell=0;
    int hold=INT_MIN;
    for(int i=0;i<pricesSize;i++)
    {
        sell=(sell > hold + prices[i])?sell : hold+prices[i];
        hold=(hold > sell-prices[i]-fee)?hold : sell-prices[i]-fee;
    }

    return sell;

}
