#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int q=101;
pair<bool,int>boy[q];
pair<bool,int>girl[q];
int bb[q],gg[q];
main()
{
    for(int i=0;i<=q;i++)
    {
        boy[i]={false,0};
    }
    for(int i=0;i<=q;i++)
    {
        girl[i]={false,0};
    }
    int b,g,c=0;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        int xx;
        cin>>xx;
        //cout<<"ss"<<endl;
        boy[xx].first=true;
        boy[xx].second+=1;
    }

    cin>>g;
    for(int i=0;i<g;i++)
    {
        int x;
        cin>>x;
        //cout<<"kk"<<endl;
        girl[x].first=true;
        girl[x].second+=1;
    }
    /*
    for(int i=0;i<101;i++)
    {
        if(boy[i].first)
            cout<<"BOY I->"<<i<<" "<<boy[i].second<<endl;
        if(girl[i].first)
            cout<<"GIRL I->"<<i<<" "<<girl[i].second<<endl;
    }
    */
    for(int i=1;i<101;i++)
    {
        if(boy[i].first && girl[i].first)
        {
            if(boy[i].second>0 && girl[i].second>0)
            {
                int mm=min(boy[i].second,girl[i].second);
                c=c+mm;
                boy[i].second-=mm;
                girl[i].second-=mm;
                ///cout<<"i "<<i<<" "<<boy[i].second<<" "<<girl[i].second<<" mm "<<mm<<" c "<<c<<endl;
            }
        }
        if(boy[i].first && girl[i+1].first)
        {
            if(boy[i].second>0 && girl[i+1].second>0)
            {
                int mm=min(boy[i].second,girl[i+1].second);
                c+=mm;
                boy[i].second-=mm;
                girl[i+1].second-=mm;
                ///cout<<"i "<<i<<" "<<boy[i].second<<" "<<girl[i+1].second<<" mm "<<mm<<" c "<<c<<endl;
            }
        }
        if(boy[i+1].first && girl[i].first)
        {
            if(boy[i+1].second>0 && girl[i].second>0)
            {
                int mm=min(boy[i+1].second,girl[i].second);
                c+=mm;
                boy[i+1].second-=mm;
                girl[i].second-=mm;
                ///cout<<"i "<<i<<" "<<boy[i+1].second<<" "<<girl[i].second<<" mm "<<mm<<" c "<<c<<endl;
            }
        }
    }
    cout<<c<<endl;
}
