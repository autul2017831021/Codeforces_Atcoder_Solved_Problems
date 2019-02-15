#include<stdio.h>
main()
{
    int n,k,a,c=0,x=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(k>=a)
        {
           c++;
        }
        else if(a>k)
        {
            x=x+2;
        }
    }
    int r=c+x;
    printf("%d",r);
}
