#include<stdio.h>
#include<string.h>
main()
{
    char s[100];
    scanf("%s",s);
    int l=strlen(s);
    int i=0,c=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q'  ||s[i]=='9'  )
        {
            c++;
            
        }
    }
    if(c>0)
        printf("YES");
    else printf("NO");
}
