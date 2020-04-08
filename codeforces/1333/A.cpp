#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main() {
    ll balsal;
    cin>>balsal;
    while(balsal--){
        ll N,M;
        cin>>N>>M;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(i==1 || j==1){
                    cout<<"B";
                }
                else{
                    cout<<"W";
                }
            }
            cout<<endl;
        }
    }
}
