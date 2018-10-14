#include<stdio.h>
main()
{
    int n,j,i,k,a[1001],count=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<n+1;i++)
    {
               scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {
        if( a[i]!=0 && a[i]>=a[k] )
        {
            count=count+1;
        }

    }
    printf("%d",count);
    return 0;


}
