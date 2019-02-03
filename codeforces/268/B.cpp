#include<stdio.h>
#include<math.h>
main()
{
    int n,i=1,r=0;
    scanf("%d",&n);
    if(n==0)
        printf("0");
    else if (n==1)
        printf("1");
    else if(n==2)
    {
        r=3;
        printf("%d",r);
    }
    else
    {
        r=n;
       for(int j=1;j<n;j++)
       {
          if(i==(n))
          {
              break;
          }
          else
          {
             r=r+(n-i)*i;
             i++;
          }
       }
       printf("%d",r);
    }

}
