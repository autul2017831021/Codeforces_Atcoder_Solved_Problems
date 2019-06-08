#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
main()
{
    int n;
    scanf("%d",&n);
    char s[1000000];
    getchar();gets(s);
    //scanf("%[^\n]s",s);
    int m=0;int c=0;
    for(int i=0;i<n;i++)
    {
         if(s[i]>='A'&& s[i]<='Z')
            c++;

         if(s[i]==' ')
         {
             m=max(m,c);
             c=0;
         }
    }
    m=max(m,c);
    printf("%d",m);

}
