#include <bits/stdc++.h>
using namespace std;
map<long long,long long>mp;
bool printDivisors(long long n,long long h)
{
    vector<long long>v;
    long long e=0,o=0;
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
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(mp[v[i]]==0)
            return false;
        else
        {
            mp[v[i]]--;
        }
    }
    return true;

}
int main()
{
    long long n,k,h,x;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(int i=0;i<v.size();i++)
    {
        x=v[i];
        h=sqrt(x);
        if(printDivisors(x,h))
            cout<<x<<" ";
    }

    return 0;
}

