#include<stdio.h>
main ()
{
    int n,a,b,c,x=0,y=0,z=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=a+x;
        y=y+b;
        z=z+c;
    }
    if(x==0 && y==0 && z==0)
    {
        printf("YES");

    }
    else
        printf("NO");
}
