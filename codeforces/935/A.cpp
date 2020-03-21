#include <bits/stdc++.h>
using namespace std;
void printDivisors(long long n,long long h)
{
    vector<long long>v;
    for(long long i=1;i<=h;i++)
    {
        if(n%i==0)
        {
            if(n/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
       cout<<v.size()-1<<endl;
}
int main()
{
    long long n;cin>>n;
    long long h=sqrt(n);
    printDivisors(n,h);
    return 0;
}

