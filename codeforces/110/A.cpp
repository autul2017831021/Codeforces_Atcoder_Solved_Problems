#include<stdio.h>
int main()
{
int c=0;
long long n;
scanf("%llu",&n);
while(n)
{
   if(n % 10 == 7 || n % 10 == 4)
        c++;
    n /= 10;
}
if(c==7 || c==4)
    printf("YES");
else
    printf("NO");
}
