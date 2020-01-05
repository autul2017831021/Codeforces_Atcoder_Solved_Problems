#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    while(n--)
    {
        int x;cin>>x;
        if(x==1)
            c++;
    }
    if(c==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
}
