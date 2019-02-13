#include<stdio.h>
main()
{
    int n,a[100000],c=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            c++;
        }
    }
    printf("%d",c);
}
