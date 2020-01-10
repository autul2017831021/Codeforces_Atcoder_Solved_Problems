    #include<bits/stdc++.h>
    using namespace std;
    main()
    {
        bool a1=false,a2=false,a3=false;
    int n,mt=0,mp=0,mg=0;
    cin>>n;
    string tax,piz,gir;
    vector<string>vt;
    vector<string>vp;
    vector<string>vg;
    vector<int>wt;
    vector<int>wp;
    vector<int>wg;
      for(int j=0;j<n;j++)
      {
        ///cout<<"Input please"<<endl;
        string name;
        int N,t=0,p=0,g=0;
        cin>>N>>name;
        for(int i=0;i<N ;i++)
        {
            string s;
            cin>>s;
            if(s[0]==s[1] && s[0]==s[3] && s[0]==s[4] && s[0]==s[6] && s[0]==s[7])
                t++;
            else if(s[0]>s[1] && s[1]>s[3] && s[3]>s[4] && s[4]>s[6] && s[6]>s[7])
                p++;
            else
                g++;
        }
        ///cout<<"taxi,pizza,girls->"<<t<<" "<<p<<" "<<g<<endl;
        vt.push_back(name);wt.push_back(t);
        vp.push_back(name);wp.push_back(p);
        vg.push_back(name);wg.push_back(g);
        if(t>mt || (t==mt && mt!=0))
        {
            mt=t;
            t=0;
        }
        if(p>mp || (p==mp && mp!=0))
        {
            mp=p;
            p=0;
        }
        if(g>mg || (g==mg && mg!=0))
        {
            mg=g;
            g=0;
        }
      }
    ///cout<<"max taxi,pizza,girls:"<<mt<<" "<<mp<<" "<<mg<<endl;

    ///\\\

    cout<<"If you want to call a taxi, you should call: ";
    if(wt[0]==mt){
        cout<<vt[0];
        a1=true;
    }
    for(int i=1;i<n-1;i++)
    {
        if(wt[i]==mt)
        {
            if(a1)
                cout<<", ";
            cout<<vt[i];
            a1=true;
        }
    }
    if(wt[n-1]==mt){
        if(a1)
            cout<<", ";
        cout<<vt[n-1];
    }
    cout<<"."<<endl;

    ///\\\

    cout<<"If you want to order a pizza, you should call: ";
    if(wp[0]==mp){
        cout<<vp[0];
        a2=true;
    }
    for(int i=1;i<n-1;i++)
    {
        if(wp[i]==mp)
        {
            if(a2)
                cout<<", ";
            cout<<vp[i];
            a2=true;
        }
    }
    if(wp[n-1]==mp){
        if(a2)
            cout<<", ";
        cout<<vp[n-1];
    }
    cout<<"."<<endl;

    ///\\\

    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    if(wg[0]==mg){
        cout<<vg[0];
        a3=true;
    }
    for(int i=1;i<n-1;i++)
    {
        if(wg[i]==mg)
        {
            if(a3)
                cout<<", ";
            cout<<vg[i];
            a3=true;
        }
    }
    if(wg[n-1]==mg){
        if(a3)
            cout<<", ";
        cout<<vg[n-1];
    }
    cout<<"."<<endl;
    }
