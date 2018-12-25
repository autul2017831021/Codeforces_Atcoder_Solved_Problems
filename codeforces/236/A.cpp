#include<stdio.h>
#include<string.h>
int bubbleSort(char s[], int l)
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
main()
{
    char s[1000];
    int c=0;
    scanf("%s",s);
    int l=strlen(s);
    bubbleSort(s,l);
    for(int i=0;i<l;i++)
    {
      if(s[i]!=s[i+1])
        c++;
    }
    if(c%2==0)
        printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");

}
