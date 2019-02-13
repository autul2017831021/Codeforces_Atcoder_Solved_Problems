#include<stdio.h>
#include<string.h>
#include <ctype.h>
main()
{
    char s[1000000];
    scanf("%s",s);
    int l=strlen(s);
    int c=0,k=0;

        for(int i=0;i<l;i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                c++;
            }
            else
                k++;
        }
        if(c==k)
        {
            for(int i=0;i<l;i++)
               {
                 s[i]=tolower(s[i]);
               }
            printf("%s",s);
        }
        else if (c>k)
          {
              for(int i=0;i<l;i++)
               {
                s[i]=toupper(s[i]);
               }
              printf("%s",s);
          }
        else if(c<k)
        {
            for(int i=0;i<l;i++)
               {
                 s[i]=tolower(s[i]);
               }
            printf("%s",s);
        }

}
