#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word)
{
   int l=word.size(),c=0;
   for(int i=0;i<(l/2);i++)
   {
     if(word[i]!=word[l-1-i])
       c++;
   }
   if(c==1)
   return true;
   else if(c==0 && l%2==1)
    return true;
   else
    return false;
}
int main()
{
  string word;
  cin >> word;
  if(isPalindrome(word))
  cout <<"YES"<< endl;
  else
    cout<<"NO"<<endl;
}
