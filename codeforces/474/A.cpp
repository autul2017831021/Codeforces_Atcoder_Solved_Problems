#include<bits/stdc++.h>
#include<string.h>
using namespace std;
main()
{
    char ch,str[100000];
    cin>>ch;
    scanf("%s",str);
    int len=strlen(str),i=0;
        if (ch == 'R')
        {
            for (i=0; i<len; i++)
            {
                if (str[i] == 'w')
                    str[i] = 'q';
                else if (str[i] == 'e')
                    str[i] = 'w';
                else if (str[i] == 'r')
                    str[i] = 'e';
                else if (str[i] == 't')
                    str[i] = 'r';
                else if (str[i] == 'y')
                    str[i] = 't';
                else if (str[i] == 'u')
                    str[i] = 'y';
                else if (str[i] == 'i')
                    str[i] = 'u';
                else if (str[i] == 'o')
                    str[i] = 'i';
                else if (str[i] == 'p')
                    str[i] = 'o';
                else if (str[i] == 's')
                    str[i] = 'a';
                else if (str[i] == 'd')
                    str[i] = 's';
                else if (str[i] == 'f')
                    str[i] = 'd';
                else if (str[i] == 'g')
                    str[i] = 'f';
                else if (str[i] == 'h')
                    str[i] = 'g';
                else if (str[i] == 'j')
                    str[i] = 'h';
                else if (str[i] == 'k')
                    str[i] = 'j';
                else if (str[i] == 'l')
                    str[i] = 'k';
                else if (str[i] == ';')
                    str[i] = 'l';
                else if (str[i] == 'x')
                    str[i] = 'z';
                else if (str[i] == 'c')
                    str[i] = 'x';
                else if (str[i] == 'v')
                    str[i] = 'c';
                else if (str[i] == 'b')
                    str[i] = 'v';
                else if (str[i] == 'n')
                    str[i] = 'b';
                else if (str[i] == 'm')
                    str[i] = 'n';
                else if (str[i] == ',')
                    str[i] = 'm';
                else if (str[i] == '.')
                    str[i] = ',';
                else if (str[i] == '/')
                    str[i] = '.';
            }
        }
        else
        {
            for (i=0; i<len; i++)
            {
                if (str[i] == 'q')
                    str[i] = 'w';
                else if (str[i] == 'w')
                    str[i] = 'e';
                else if (str[i] == 'e')
                    str[i] = 'r';
                else if (str[i] == 'r')
                    str[i] = 't';
                else if (str[i] == 't')
                    str[i] = 'y';
                else if (str[i] == 'y')
                    str[i] = 'u';
                else if (str[i] == 'u')
                    str[i] = 'i';
                else if (str[i] == 'i')
                    str[i] = 'o';
                else if (str[i] == 'o')
                    str[i] = 'p';
                else if (str[i] == 'a')
                    str[i] = 's';
                else if (str[i] == 's')
                    str[i] = 'd';
                else if (str[i] == 'd')
                    str[i] = 'f';
                else if (str[i] == 'f')
                    str[i] = 'g';
                else if (str[i] == 'g')
                    str[i] = 'h';
                else if (str[i] == 'h')
                    str[i] = 'j';
                else if (str[i] == 'j')
                    str[i] = 'k';
                else if (str[i] == 'k')
                    str[i] = 'l';
                else if (str[i] == 'l')
                    str[i] = ';';
                else if (str[i] == 'z')
                    str[i] = 'x';
                else if (str[i] == 'x')
                    str[i] = 'c';
                else if (str[i] == 'c')
                    str[i] = 'v';
                else if (str[i] == 'v')
                    str[i] = 'b';
                else if (str[i] == 'b')
                    str[i] = 'n';
                else if (str[i] == 'n')
                    str[i] = 'm';
                else if (str[i] == 'm')
                    str[i] = ',';
                else if (str[i] == ',')
                    str[i] = '.';
                else if (str[i] == '.')
                    str[i] = '/';
}
        }
        cout<<str;
}
