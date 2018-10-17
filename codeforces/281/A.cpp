#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000000];
    int i=0;
    scanf("%s",s);
    s[i]=toupper(s[i]);
    printf("%s",s);
}
