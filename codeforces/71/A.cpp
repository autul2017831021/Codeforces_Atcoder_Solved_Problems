#include<stdio.h>
#include<string.h>
main()
{
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char st[10000];
        scanf("%s",st);
        l=strlen(st);
        if(l<=10)
        {
            printf("%s\n",st);
        }
        else
        {
            printf("%c%d%c",st[0],l-2,st[l-1]);
            printf("\n");

        }
    }
    return 0;


}
