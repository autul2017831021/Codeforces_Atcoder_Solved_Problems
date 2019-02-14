#include<stdio.h>
#include<string.h>
main()
{
    char a[1000],b[1000];
    scanf("%s %s",&a,&b);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='1' && b[i]=='1' || a[i]=='0' && b[i]=='0' )
        {
            printf("0");
        }
        else
            printf("1");
    }
}
