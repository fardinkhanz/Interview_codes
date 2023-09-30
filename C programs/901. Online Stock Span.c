


typedef struct {
    int* prices;
    int* spans;
    int top;

} StockSpanner;


StockSpanner* stockSpannerCreate() {
    StockSpanner* obj =(StockSpanner*)malloc(sizeof(StockSpanner));
    obj->prices=NULL;
    obj->spans=NULL;
    obj->top=-1;
    return obj;

}

int stockSpannerNext(StockSpanner* obj, int price) {
    int span=1;
    while(obj->top >=0 && obj->prices[obj->top] <= price ){
        span+=obj->spans[obj->top];
        obj->top--;
    }
    obj->top++;
    obj->prices=(int*)realloc(obj->prices, sizeof(int)*(obj->top+1));
    obj->spans=(int*)realloc(obj->spans, sizeof(int)*(obj->top+1));
    obj->prices[obj->top]=price;
    obj->spans[obj->top]=span;

    return span;


}

void stockSpannerFree(StockSpanner* obj) {
    if(obj){
        free(obj->prices);
        free(obj->spans);free(obj);
    }

}

/**
 * Your StockSpanner struct will be instantiated and called as such:
 * StockSpanner* obj = stockSpannerCreate();
 * int param_1 = stockSpannerNext(obj, price);

 * stockSpannerFree(obj);
*/
