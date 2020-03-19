#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        int x=s[i];
        if(x%2==0)
        {
            a+=(i+1);
        }
    }
    cout<<a<<endl;
}
