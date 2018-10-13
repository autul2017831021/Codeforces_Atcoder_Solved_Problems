#include<stdio.h>
#include<string.h>
#include <ctype.h>

main()
{
  char st[1000000],temp;
    scanf("%[^\n]s",st);
    int l=strlen(st);
    int j;
    for(j=0;j<l;j++)
    {
        st[j]=tolower(st[j]);

    }
    for(j=0;j<l;j++)
    {
        if(st[j]!='a' && st[j]!='e' && st[j]!='i' && st[j]!='o' && st[j]!='u' && st[j]!='y')
        {

            printf(".%c",st[j]);

        }
    }


}

