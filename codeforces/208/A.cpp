#include<stdio.h>
#include<string.h>
#include <ctype.h>
main()
{
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    int c=0;
    for(int j=0;j<l;j++)
    {
        s[j]=toupper(s[j]);
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
          i=i+2;
          if(c!=0)
          {
              printf(" ");
          }
         
        }
        else
            {
                c=1;
                printf("%c",s[i]);
            }

    }
}
