
#include<stdio.h>
#include<string.h>
int bubbleSort(int ar[], int n)
{
   int i, j,temp=0;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (ar[j] > ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }

}
main()
{
    int n,sum=0,s=0;
    int ar[1000];
    scanf("%d",&n);
    for(int k=0;k<n;k++)
    {
        scanf("%d",&ar[k]);
        s=s+ar[k];
    }
    ///printf("%d\n",s);
    int x=s/2;
    bubbleSort(ar,n);
    int r=ar[n-1];
    ///printf("%d\n",r);
    int c=1,j=1;
    for(int i=0;i<n;i++)
    {
       j++;
      if(r>s-r)
      {
          break;
      }
      r=r+ar[n-(j)];
      c++;
    }
    printf("%d",c);
    return 0;
}


