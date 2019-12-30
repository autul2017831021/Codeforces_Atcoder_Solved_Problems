#include <bits/stdc++.h>
using namespace std;
void printDivisors(long long n,long long h,long long k)
{
    vector<long long>v;

    for (long long i=1; i<=h; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    /*for(long long i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
        cout<<endl<<"size :"<<v.size()<<endl;*/
        if(k>v.size())
            cout<<"-1"<<endl;
        else
        {
            for(long long i=0;i<v.size();i++)
            {
                if(i==k-1)
                {
                    cout<<v[i]<<endl;break;
                }
            }
        }

}
int main()
{
    long long n,k;cin>>n>>k;long long h=sqrt(n);
    ///cout<<"square root of n :"<<h<<endl;
    printDivisors(n,h,k);
    return 0;
}
