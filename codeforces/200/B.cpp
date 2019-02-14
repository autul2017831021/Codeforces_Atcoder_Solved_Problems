#include<stdio.h>
#include<math.h>
main()
{
    double n,a,s=0,i,r;
    scanf("%lf",&n);
    for( i=0;i<n;i++)
    {
        scanf("%lf",&a);
        s=s+a;
    }
    r=s/n;
    printf("%lf\n",r);
}
