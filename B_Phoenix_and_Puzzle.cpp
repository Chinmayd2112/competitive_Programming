#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=2;i<n;i++)
    {  
      int count=0;
      for(int j=2;j<i/2;j++)
      {
        if(i%j==0)
        count=1;
      }
      if(count==0)
      v.push_back(i);
    }
    if(n==1)
   cout<<"NO"<<endl;
   else
   { 
    for(int i=0;i<v.size();i++)
    {
      int k=n/v[i];
  //  cout<<m<<endl;
     if(ceil(log2(k))==floor(log2(k)) and n%(v[i]^2)==0 and n/(v[i]^2)>1)
     {
     cout<<"YES"<<endl;
     break;
     }
     else
     {
     cout<<"NO"<<endl;
     break;
     }
    }
    //  else if(ceil(log2(k))==floor(log2(k))and n%9==0 and n/9>1)
    //  cout<<"YES"<<endl;
      if(ceil(log2(n))==floor(log2(n)))
      cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }
   }


}