#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,c=0,x,i=0,ans;
        map< int,int,greater<int> >mp;
        vector<int>v;
        vector<int>s;
        cin>>n;
        while(n--)
        {
            cin>>x;
            mp[x]++;
            i++;
        }
        map<int,int>::iterator it;
        i=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            c=c+(*it).second;
            m=min((*it).first,c);
            v.push_back(c);
            s.push_back(m*m);

            //cout<<v[i]<<" ";i++;
            //cout<<(*it).first<<" "<<(*it).second<<endl<<" -> "<<endl;
        }
        ans=*max_element(s.begin(),s.end());
        cout<<sqrt(ans)<<endl;
    }
}
