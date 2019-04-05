#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0;
  cin>>n;
  string s;
  char x;
  set<char>a;


  for(int i=0;i<n;i++)
  {
      cin>>s;
      int l=s.size();
      for(int k=0;k<l;k++)
      {
          s[k]=tolower(s[k]);
      }
sort(s.begin(),s.end());
      ///cout<<s<<endl<<s[i]<<endl;

      if(l==1)
      {
          cout<<"YES"<<endl;

      }

      else
      {
          if(set<char>(s.begin(),s.end()).size()==l)
          {
             for(int j=0;j<l-1;j++)
             {
                 if(s[j+1]-s[j]==1)
                 {
                     c++;
                 }
                 else
                 {
                     c=0;
                     break;
                 }
             }
             if(c!=0)
              cout<<"YES"<<endl;
              else if(c==0)
                cout<<"NO"<<endl;

          }
          else
          {
             cout<<"NO"<<endl;
          }

      }

  }






}
