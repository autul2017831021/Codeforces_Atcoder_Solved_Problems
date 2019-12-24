#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool marked[1000000];
int main()
{
    int M,N,x=0;
    scanf("%d %d",&M,&N);
    vector<int>v;
    /*if(N==1 || N==0)
    {
        cout<<"YES"<<endl;return 0;
    }*/
    for (int i = 2; i * i <= M; i++)
    {
        if (marked[i] == false)
        {
            for (int j = i * i; j <= M; j += i)
            {
                marked[j] = true;
            }
        }
    }
    int c=0;
    for(int k=2;k<=M;k++)
    {
        if(marked[k]==false)
        {
            v.push_back(k);
            //cout<<k<<" ";
        }
    }
    //cout<<endl;
    for(int i=0;i<(v.size());i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]+v[j+1]+1==v[i])
            {
                x++;
                //cout<<v[j]<<" "<<v[j+1]<<" "<<v[j+1]+v[j]<<" ";
                break;
            }
        }
        //cout<<endl;
    }
    if(x<N)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}


