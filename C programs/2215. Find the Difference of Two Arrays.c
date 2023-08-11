/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes){

    int i=0, j=0, temp=0, temp1=0, flag=0, size1=0, size2=0;


  int* d1=(int*)malloc(nums1Size * sizeof(int));
    int* d2=(int*)malloc(nums2Size * sizeof(int));


    for(i=0;i<nums1Size;i++)
    { flag=0;
         for(j=0;j<size1;j++)
         {
             if(d1[j]==nums1[i])
             {
                 flag=1;
                 break;
             }
         }
     if(!flag)
  {
    d1[size1]=nums1[i];
    size1++;
  }


 }
    for(i=0;i<nums2Size;i++)
    { flag=0;
         for(j=0;j<size2;j++)
         {
             if(d2[j]==nums2[i])
             {
                 flag=1;
                 break;
             }
         }
     if(!flag)
  {
    d2[size2]=nums2[i];
    size2++;
  }


 }

  int* diff1=(int*)malloc(size1 * sizeof(int));
  int* diff2=(int*)malloc(size2 * sizeof(int));



    for(i=0;i<size1;i++)
    { flag=0;
         for(j=0;j<size2;j++)
         {
             if(d1[i]==d2[j])
             {
                 flag=1;
                 break;
             }
         }
     if(!flag)
  {
    diff1[temp]=d1[i];
    temp++;
  }


 }


   for(i=0;i<size2;i++)
    { flag=0;
         for(j=0;j<size1;j++)
         {
             if(d2[i]==d1[j])
             {
                 flag=1;
                 break;
             }
         }
     if(!flag)
  {
    diff2[temp1]=d2[i];
    temp1++;
  }

 }

 int** result=(int**)malloc(2*sizeof(int*));

 result[0]=diff1;
 result[1]=diff2;

    *returnSize=2;

     *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    (*returnColumnSizes)[0] = temp;
    (*returnColumnSizes)[1] = temp1;

    return result;



}
