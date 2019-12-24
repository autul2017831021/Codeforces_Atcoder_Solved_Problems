#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool marked[1000000];
int main()
{
    int M;
    scanf("%d",&M);

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
    int c=0,count=0;
    vector<int>v;
    for(int k=2;k<=M;k++)
    {
        if(marked[k]==false)
        {
            v.push_back(k);
            //printf("%d ",k);
            //c++;
        }
    }
    for(int i=1;i<=M;i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]>M)
                break;

             if(i%v[j]==0){
                c++;
               }
        }
        if(c==2)
            count++;
        c=0;
    }
    cout<<count<<endl;
}


