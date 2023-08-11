bool uniqueOccurrences(int* arr, int arrSize){
    int* temp=(int*)malloc(arrSize*sizeof(int));
    for(int i=0;i<arrSize;i++)
    {
        int count=0;
        for(int j=0;j<arrSize;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

            }
        }
        temp[i]=count;

    }


int t=0;
int* temp1=(int*)malloc(arrSize*sizeof(int));
for(int i=0;i<arrSize;i++)
    {
        int count=0;
        for(int j=0;j<arrSize;j++)
        {
            if(temp[i]==temp[j])
            {
                count++;
            }

        }
        if(count>temp[i])
        {
            return false;
        }
    }
return true;







}

