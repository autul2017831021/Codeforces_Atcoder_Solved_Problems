#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,k;cin>>k;
    vector<long long>v;
    for(int i=1;i<=9;i++)
    {
        v.push_back(i);
    }
    v.push_back(1);
    v.push_back(0);
    ///2digit
    for(int i=11;i<100;i++)
    {
        v.push_back(i/10);
        v.push_back(i%10);
    }
    v.push_back(1);v.push_back(0);v.push_back(0);
    for(int i=101;i<1000;i++)
    {
        v.push_back(i/100);
        v.push_back((i/10)%10);
        v.push_back(i%10);
    }
    v.push_back(1);v.push_back(0);v.push_back(0);v.push_back(0);
    for(int i=1001;i<10000;i++)
    {
        v.push_back(i/1000);
        v.push_back((i/100)%10);
        v.push_back((i/10)%10);
        v.push_back(i%10);
    }
    cout<<v[k-1]<<endl;
    /*cout<<v.size()<<endl;
    for(int i=0;i<v.size();i=i+1)
    {
        cout<<v[i]<<endl;
    }*/
}
