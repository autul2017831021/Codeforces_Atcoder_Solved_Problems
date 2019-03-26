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
    for(int i=0;i<s.size();i++)
    {
        ch.insert(s[i]);
       /// cout<<s[i]<<'\n';
    }
    if(ch.size()==3)
        cout<<'1';
    else
    cout<<ch.size()-4;
}
