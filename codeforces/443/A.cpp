#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char>ch;
    string s;
    getline(cin,s);
    if(s[0]=='{' && s[1]=='}')
        {
            cout<<'0';
            return 0;
        }
    else if(s[0]=='{' && s[1]=='a' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
     else if(s[0]=='{' && s[1]=='b' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
      else if(s[0]=='{' && s[1]=='c' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='d' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='d' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='f' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='g' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='h' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='i' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='j' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='k' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='l' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='m' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='n' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='o' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='p' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }else if(s[0]=='{' && s[1]=='q' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='r' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='s' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='t' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='u' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='v' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='w' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='x' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='y' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }
        else if(s[0]=='{' && s[1]=='z' && s[2]=='}')
        {
            cout<<'1';
            return 0;
        }

    for(int i=0;i<s.size();i++)
    {
        ch.insert(s[i]);
       /// cout<<s[i]<<'\n';
    }
    cout<<ch.size()-4;
}
