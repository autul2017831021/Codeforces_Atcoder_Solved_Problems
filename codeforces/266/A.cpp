#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000000];
    int n,count=0;
    scanf("%d",&n);
    scanf("%s",s);
    int l=strlen(s);
    int i,r=0,g=0,b=0;
    for(i=0;i<l;i++)
    {
         s[i]=toupper(s[i]);
    }

   for(i=0;i<l-1;i++)
{
    if(s[i]==s[i+1])
    {
        count++;
    }

}
printf("%d",count);
}


