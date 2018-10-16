#include<stdio.h>
#include<string.h>
main()
{
    int i,l,count=0,coun=0;
    char n[1000];
    scanf("%s",n);
    l=strlen(n);
   for(i=0;i<l;i++)
   {
if(n[i]=='0')
{
   count++;
    coun=0;
}
else if(n[i]=='1')
{

    coun++;
    count=0;
}
if(count>=7 || coun>=7)
{
    break;
}


   }
  if(count>=7 || coun>=7)
   {
    printf("YES");
   }
   else
    {
      printf("NO");
    }
   return 0;

}
