#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
    char s[101], w[5]={'h','e','l','l','o'};
    scanf("%s",s);
    int c=0,a=0;
    int k=strlen(s);
 for(int i=0;i<k;i++)
  {
    if(s[i]=='h')
      {
        a=i;
        i=0;
        c++;
        ///printf("%d\n",a);
        break;
      }

  }
   for(int i=a+1;i<k;i++)
  {
    if(s[i]=='e')
      {
        a=i;
        i=0;
        c++;
        ///printf("%d\n",a);
        break;
      }

  }
   for(int i=a+1;i<k;i++)
  {
    if(s[i]=='l')
      {
        a=i;
        i=0;
        c++;
        ///printf("%d\n",a);
        break;
      }

  }
   for(int i=a+1;i<k;i++)
  {
    if(s[i]=='l')
      {
        a=i;
        i=0;
        c++;
        ///printf("%d\n",a);
        break;
      }

  }
   for(int i=a+1;i<k;i++)
  {
    if(s[i]=='o')
      {
        a=i;
        i=0;
        ///printf("%d\n",a);
        c++;
        break;
      }

  }

///printf("%d",c);
if(c==5)
        printf("YES");
    else
        printf("NO");
}
