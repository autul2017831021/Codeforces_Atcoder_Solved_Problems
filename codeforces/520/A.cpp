#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[1000],x;
    set<char>y;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        s[i]=tolower(s[i]);
       /// cout<<s[i];
        x=s[i];
        y.insert(x);
    }
   /// cout<<' ';
    if(y.size()>=26)
        cout<<"YES";
    else
        cout<<"NO";

}
