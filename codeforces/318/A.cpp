#include<stdio.h>
#include<math.h>

main()
{
    long long int n,k,r,i,j=2;
    scanf("%lld %lld",&n,&k);
    long long int h=n/2;
    long long int x=k/2;
    if(n==1 || n%2==0 && k==n)
    {
        r=k;
    }
    else if(n%2==0 && k==(h+1))
    {
        r=2;
    }
    else if(n%2==0 && k>h+1)
    {
       r=2*(k-h);
    }
    else if(n%2==0 && k==h)
    {
         r=(2*k)-1;
    }
     else if(n%2==0 && k<h)
     {
          r=(2*k)-1;
     }
     else if(n%2!=0 && k==n)
     {
         r=k-1;
     }

     else if(n%2!=0 && k==(h+2))
     {
         r=2;
     }
    else if(n%2!=0 && k>h+2)
    {

      r=2*(k-1-h);

    }
    else if(n%2!=0 && k==h+1)
    {
       r=n;
    }
    else if(n%2!=0 && k==h)
    {
        r=(2*k)-1;
    }
    else if(n%2!=0 && k<h)
    {
        r=(2*k)-1;
    }
        printf("%lld",r);

}
