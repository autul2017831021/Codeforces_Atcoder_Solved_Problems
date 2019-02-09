#include<stdio.h>
main()
{
    int n,a,b,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b>a+1)
        {
            c++;
        }
    }
    printf("%d",c);
}
