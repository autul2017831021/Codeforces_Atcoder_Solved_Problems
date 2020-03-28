#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,index=0;
        bool f=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(n>2)
        {
            for(int i=1;i<n-1;i++)
            {
                if(v[i]>=i)
                    f=1;
                else
                {
                    index=i-1;
                    f=0;
                    break;
                }
            }
            ///cout<<"index->"<<index<<" vec[in]->"<<v[index]<<endl;
            if(f)
                cout<<"YES"<<endl;
            else
             {
                 int index2=index+1;
                 //cout<<"index2->"<<index2<<" vec[in2]->"<<v[index2]<<endl;
                 int j=1;
                 for(int i=n-2;i>=index2;i--)
                 {
                    if(v[i]>=j && v[index]>j)
                    {
                        f=1;
                        ///cout<<"ok -> "<<i<<" "<<v[i]<<" <-"<<endl;
                    }
                    else
                    {
                        f=0;
                        break;
                        ///cout<<"bal -> "<<i<<" "<<v[i]<<" <-"<<endl;
                    }
                    j++;
                 }
                 if(f)
                    cout<<"YES"<<endl;
                 else
                    cout<<"NO"<<endl;
             }
        }
        else if(n==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(v[0]==0 && v[1]==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}

