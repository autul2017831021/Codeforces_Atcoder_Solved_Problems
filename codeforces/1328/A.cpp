    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    main()
    {
        ll n;
        cin>>n;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a%b==0)
                cout<<"0"<<endl;
            else if(b>a)
            {
                cout<<b-a<<endl;
            }
            else
            {
                int d=a/b;
                b=b*(d+1);
                cout<<b-a<<endl;
            }
        }
    }