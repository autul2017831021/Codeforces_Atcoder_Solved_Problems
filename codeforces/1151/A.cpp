#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=965496549;
    for(int i=0;i<n-3;i++)
    {
        int cn=0;
        int a=abs(s[i]-'A');
        a=min(26-a,a);
        int b=abs(s[i+1]-'C');
        b=min(26-b,b);
        int c=abs(s[i+2]-'T');
        c=min(26-c,c);
        int d=abs(s[i+3]-'G');
        d=min(26-d,d);
        cn=a+b+c+d;
        m=min(m,cn);
    }
    cout<<m<<endl;
}

