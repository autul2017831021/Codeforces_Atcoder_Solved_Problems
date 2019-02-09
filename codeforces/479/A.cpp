#include<stdio.h>
#include<math.h>
main()
{
    int x,y,z,a=0,b=0,c=0,d=0,e=0,f=0;
    scanf("%d %d %d",&x,&y,&z);
    a=x+(y*z);
    f=(x*y)+z;
    b=x*(y+z);
    d=(x+y)*z;
    c=x*y*z;
    e=(x+y)+z;
    ///printf("%d %d %d %d %d %d  ",a,b,c,d,e,f);
    if(a>=b && a>=c && a>=d && a>e && a>f)
        printf("%d ",a);
    else if(b>=a && b>=c && b>=d && b>e && b>f)
        printf("%d ",b);
    else if(c>=b && c>=a && c>=d && c>e && c>f)
        printf("%d ",c);
    else if(d>=b && d>=c && d>=a && d>e && d>f)
        printf("%d ",d);
    else if(e>=b && e>=c && e>=a && e>d && e>f)
        printf("%d ",e);
     else if(f>=b && f>=c && f>=a && f>d && f>e)
        printf("%d ",f);

}
