#include<stdio.h>
main()
{
    int n,i,X=0;
    char k[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",k);
        if(k[0]=='+' || k[1]=='+')
        {
            X=X+1;
        }
        else if(k[0]=='-' || k[1]=='-')
        {
            X=X-1;
        }

    }
    printf("%d",X);

}
