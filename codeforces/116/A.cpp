#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int n,a,b,r=0,temp=0;
    scanf("%d\n",&n);
    for(int i=1;i<n;i++)
    {

        scanf("%d %d\n",&a,&b);
        r=r-a;
        r=r+b;
        if(r>temp)
        {
            temp=r;
        }
    }
    printf("%d",temp);
}
