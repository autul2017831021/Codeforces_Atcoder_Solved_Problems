#include<stdio.h>
#include<math.h>
main()
{
    long long n,j=0,x=0,y=0;
    //long long r=0;
    scanf("%lld",&n);
    if(n==1)
    {
        x=-1;
        y=0;
    }
    else if(n%2==0)
    {

              x=n/2;
              y=0;

    }
    else if(n%2!=0)
    {
       x=0;
       y=(n+1)/2;
    }
    long long r=x-y;
    printf("%lld",r);


}

