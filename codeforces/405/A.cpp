#include<stdio.h>
void bubbleSort(int ar[], int n)
{
   int i, j,temp=0;
   for (i = 0; i < n-1; i++)
   {

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (ar[j] > ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
   }
}
main()
{
    int n;
    int ar[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    bubbleSort(ar,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
