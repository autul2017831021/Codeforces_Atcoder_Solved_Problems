#include<bits/stdc++.h>
using namespace std;
void mysleep(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while(goal > clock());
}
int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    mysleep(1100);
    return 0;
}
