#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    vector<int>v(101,0);
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v[j]++;
        s.insert(j);
    }
    int kk=s.size();
    vector<int>sv(s.begin(),s.end());
    if(kk==2 && v[sv[0]]==v[sv[1]])
    {
        cout<<"YES"<<endl<<sv[0]<<" "<<sv[1];
    }
    else
        cout<<"NO";
}
