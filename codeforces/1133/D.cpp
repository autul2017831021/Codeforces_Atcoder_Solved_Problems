    #include<bits/stdc++.h>
    using namespace std;
    typedef double ll;
    main()
    {
        int n,c=0,m=0;
        ll d;
        cin>>n;
        vector<int>v,w;
        for(ll i=0;i<n;i++)
        {
            ll o;cin>>o;
            v.push_back(o);
        }
        for(ll i=0;i<n;i++)
        {
            ll o;cin>>o;
            w.push_back(o);
        }
        vector<ll>x;
        map<double,int>mp;
        for(ll i=0;i<n;i++)
        {
            if(v[i]==0)
            {
               if(w[i]==0)
               {
                   c++;
               }
            }
            else
            {
                d=-1*(((double)(5*w[i]))/((double)(v[i])));
                x.push_back(d);
                mp[d]++;
            }

        }
        if(x.size()==0)
        {
            cout<<c;return 0;
        }
        /*
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();i++)
            cout<<x[i]<<" ";
        cout<<endl;
        */
        map<double,int>::iterator it;
        vector<int>f;
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout<<(*it).first<<" "<<(*it).second<<endl;
            f.push_back((*it).second);
        }
        int bal=*max_element(f.begin(),f.end());
        cout<<bal+c<<endl;
        return 0;

    }
