
#include<stdio.h>
main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    int count = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==1 && b==1 || a==1 && c==1 || b==1 && c==1)
           {
             count=count+1;
           }

    }
    printf("%d",count);
    return 0;

}
