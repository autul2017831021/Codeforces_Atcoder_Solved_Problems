    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    long long int BS(ll a[],ll x,ll n)
    {
        ll l,r;
        l=1;
        r=n;
            while(r>=l)
            {
                ll mid=(l+r)/2;
                if(a[mid]>x)
                    r=mid-1;
                else
                    l=mid+1;
            }
            return l;
    }
        #include<bits/stdc++.h>
        using namespace std;
        typedef long long ll;
        main()
        {
            ll n,c=1,m=1,b=5;
            cin>>n;
            vector<ll>v(n);
            for(ll i=0;i<n;i++)
            {
                cin>>v[i];
            }
            ;
            sort(v.begin(),v.end());
            for(ll i=0;i<n;i++)
            {
                ll l=i;
                ll r=n-1;
                ll mid;
                //cout<<i<<endl;
                while(r>=l){
                        //cout<<"I->"<<i<<" R->"<<r<<" L->"<<l<<endl;
                        mid=(l+r)/2;
                    if(v[mid]-v[i]<=5)
                    {
                        l=mid+1;
                    }
                    else
                    {
                        r=mid-1;
                    }
                }
                //cout<<"bal->"<<(((r+l)/2))-i+1<<endl;
                m=max(m,(((r+l)/2))-i+1);
                //cout<<m<<endl;
            }
            cout<<m<<endl;
        }