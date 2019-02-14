#include<stdio.h>
#include<string.h>
main()
{
    char s[100000];
    int i,a=0,d=0,n;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }
    if(a>d)
    printf("Anton");
    else if(d>a)
    printf("Danik");
    else
    printf("Friendship");
}