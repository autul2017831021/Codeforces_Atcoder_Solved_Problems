#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000000];
    int c1=0,c2=0,c3=0,c=0;
    scanf("%s",s);
    int l=strlen(s);
    int j,i,temp=0;

     for(i=0;i<l;i++)
    {
         if(s[i]=='3')
         {
              c3=c3+1;
         }
         if(s[i]=='2')
         {
              c2=c2+1;
         }
         if(s[i]=='1')
         {
              c1=c1+1;
         }

    }
    for(j=0;j<c1;)
    {
        printf("1");
        j++;
        if(j<c1 || c2!=0 || c3!=0)
        {
            printf("+");
        }
    }
    for(j=0;j<c2;)
    {
        printf("2");
        j++;
        if(j<c2 || c3!=0)
        {
            printf("+");
        }
    }
    for(j=0;j<c3;)
    {
        printf("3");
        j++;
        if(j<c3 )
        {
            printf("+");
        }
    }

}


