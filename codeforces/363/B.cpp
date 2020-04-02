#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    long n,k,in=0;
    cin>>n>>k;
    long long a[n+1];
    ll sum=0;
    ll ax=10000000,ax2=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i<k-1){
            sum+=a[i];
        }
        else if(i==k-1){
            sum+=a[i];
            ax=sum;
            ax2=1;
        }
        else{
            sum=sum-a[in]+a[i];
            if(sum<ax){
                ax=sum;
                ax2=in+2;
            }
            in++;
        }
    }
    cout<<ax2<<endl;
    return 0;
}
