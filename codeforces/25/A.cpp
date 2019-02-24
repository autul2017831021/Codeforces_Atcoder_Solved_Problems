#include<stdio.h>
main()
{
    int n,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0])%2==0 && (a[n-1])%2==0)
    {
        for(int i=1;i<n-1;i++)
        {
            if(a[i]%2!=0)
            {
                printf("%d",i+1);
            }
        }
    }
    else if((a[0])%2!=0 && (a[n-1])%2!=0)
    {
        for(int i=1;i<n-1;i++)
        {
            if(a[i]%2==0)
            {
                printf("%d",i+1);
            }
        }
    }
    else if((a[0])%2==0 && (a[1])%2==0 && (a[n-1])%2!=0)
    {
       printf("%d",n);
    }
    else if((a[0])%2==0 && (a[1])%2!=0 && (a[n-1])%2!=0)
    {
       printf("1");
    }
    else if((a[0])%2!=0 && (a[1])%2==0 && (a[n-1])%2==0)
    {
        printf("1");
    }
    else if((a[0])%2!=0 && (a[1])%2!=0 && (a[n-1])%2==0)
    {
        printf("%d",n);
    }
    else if((a[0])%2!=0 && (a[1])%2==0 && (a[n-1])%2==0)
    {
        printf("1");
    }
    

}
