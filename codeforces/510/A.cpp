#include<bits/stdc++.h>
using namespace std;
main()
{
    int c,r;
    cin>>c>>r;
    for(int i=1;i<=c;i++)
    {
        if(i%4==2)
        {
        for(int j=0;j<r-1;j++)
            cout<<".";
        cout<<"#"<<endl;
        }
        else if(i%4==0)
        {
            cout<<"#";
            for(int j=0;j<r-1;j++)
            cout<<".";
            cout<<endl;
        }
        else
        {
            for(int j=0;j<r;j++)
                cout<<"#";
            cout<<endl;
        }

    }

}
