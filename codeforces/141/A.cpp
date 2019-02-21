#include<stdio.h>
#include<string.h>
int bs(char s[], int l)
{
   int i, j,temp=0;
   for (i = 0; i < l-1; i++)

       // Last i elements are already in place
       for (j = 0; j < l-i-1; j++)
           if (s[j] > s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }

}

int bst(char st[], int lm)
{
   int i, j,temp=0;
   for (i = 0; i < lm-1; i++)

       // Last i elements are already in place
       for (j = 0; j < lm-i-1; j++)
           if (st[j] > st[j+1])
            {
                temp=st[j];
                st[j]=st[j+1];
                st[j+1]=temp;
            }

}
main()
{
    char s[1000],t[1000],st[10000];
    scanf("%s %s %s",s,t,st);
    strcat(s,t);
    int c=0;
    int l=strlen(s);
    int lm=strlen(st);
    bs(s,l);
    bst(st,lm);
    if(l!=lm)
    {
        printf("NO");
        return 0;
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]==st[i])
            {
                c++;
            }
        }
    }
    if(c==l)
        printf("YES");
    else
        printf("NO");


}
