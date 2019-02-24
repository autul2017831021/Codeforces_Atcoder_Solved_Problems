#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char s[100];
    int c=0;
    scanf("%s",s);
    int l=strlen(s);
    if(s[0]>96 || s[0]<=90)
    {
        c=1;
    }
    for(int j=1;j<l;j++)
    {
        if(s[j]<=90)
        {
            c++;
        }


    }
    ///printf("%d",c);
    if(c!=l)
        {
            puts(s);
            return 0;
        }
    else if(c==l)
    {
        if(s[0]>96)
        s[0]=toupper(s[0]);
        else
            s[0]=tolower(s[0]);
      for(int i=1;i<l;i++)
       {
            s[i]=tolower(s[i]);
       }
    }
    printf("%s",s);

return 0;
}
