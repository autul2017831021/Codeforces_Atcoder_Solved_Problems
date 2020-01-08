#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<bool>w(10000,false);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(!w[x])
        {
            v.push_back(x);
            w[x]=true;
        }
    }
    sort(v.begin(),v.end());
    int s=v.size();
    if(s>3)
        {cout<<"-1";return 0;}
    else if(s==1)
        {cout<<"0";return 0;}
    else if(s==3){
    for(int i=1;i<1000;i++)
    {
        ///cout<<"entered:"<<i<<endl;
        ///cout<<v[0]+i<<" "<<v[1]<<" "<<v[2]-i<<endl;
        if((v[0]+i)==(v[2]-i) && v[1]==(v[0]+i))
        {
            cout<<i;return 0;
        }
    }
    cout<<"-1";
    return 0;
    }
    else if(s==2)
    {
        for(int i=1;i<1000;i++)
    {
        ///cout<<"entered:"<<i<<endl;
        ///cout<<v[0]+i<<" "<<v[1]endl;
        if(v[1]==(v[0]+i) || (v[0]+i)==(v[1]-i))
        {
            cout<<i;return 0;
        }
    }
    cout<<"-1";
    return 0;
    }

}
