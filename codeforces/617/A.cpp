#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x==1)
        printf("1");
    else if(x==2)
            printf("1");
    else if(x==3)
        printf("1");
    else if(x==4)
        printf("1");
    else if(x>=5 && x%5==0)
    {
        int a=x/5;
        printf("%d",a);
    }
    else
    {
        int a=x/5;
        int m=1;
        int r=a+m;
        printf("%d",r);
    }
}
