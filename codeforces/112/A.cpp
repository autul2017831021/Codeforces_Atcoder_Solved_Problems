#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char s[101],t[101];
    int j,l,i,count=0;
    scanf("%s",s);
    scanf("%s",t);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       s[i]=tolower(s[i]);
       t[i]=tolower(t[i]);
    }
    for(i=0;i<l;i++)
    {
      if(s[i]==t[i])
      {
          count++;
      }
      else if(s[i]!=t[i] && s[i]>t[i])
      {
          count=0;
          printf("1");
          break;
      }
      else if(s[i]!=t[i] && s[i]<t[i])
      {
          count=0;
          printf("-1");
          break;
      }
    }
if(count==l)
{
    printf("0");
}
  return 0;
}
