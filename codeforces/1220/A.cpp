#include<bits/stdc++.h>
using namespace std;
main()
{
    int k,o=0,n=0,e=0,r=0,z=0;
    string s;
    cin>>k>>s;
    for(int i=0;i<k;i++)
    {
        if(s[i] == 'z') z++;
        else if(s[i] == 'n') n++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"1"<<" ";
    }
    for(int i=0;i<z;i++)
    {
        cout<<"0"<<" ";
    }
}
