#include<stdio.h>
main()
{
    int k,n,w,r,b;
    scanf("%d%d%d",&k,&n,&w);
    r=(k*w*(w+1))/2;
    b=r-n;
    if(b>=0)
    printf("%d",b);
    else
        printf("0");

}
