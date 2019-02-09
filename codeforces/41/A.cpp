#include<stdio.h>
#include<string.h>
void stringreverse(char t[],int l)
{
    int k=0,i;
  for(i=0;i<l;i++)
    {
        if(i<(l-(i+1)))
        {
            k=t[i];
            t[i]=t[l-i-1];
            t[l-i-1]=k;
        }
    }
}
main()
{
    char s[1000],t[1000];
    scanf("%s %s",s,t);
    int l=strlen(s);
    stringreverse(t,l);
    ///puts(t);
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[i])
        {
            c++;
        }
    }
    if(c==l)
        printf("YES");
    else
        printf("NO");

}
