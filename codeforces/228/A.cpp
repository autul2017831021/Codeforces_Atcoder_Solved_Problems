#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b;
    set<long long>s;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        b=a;
        s.insert(b);
    }
    long long r=4-s.size();
    cout<<r<<endl;

}
