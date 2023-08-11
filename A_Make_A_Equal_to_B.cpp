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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
      for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int counta=0;
    int countb=0;
    for(int i=0;i<n;i++)
    { 
    //cout<<a[i]<<" ";
       if(a[i]==1)
       counta++;
        if(b[i]==1)
       countb++;
    }
  // cout<<counta<<" "<<countb<<endl;

  if(counta<=countb)
  cout<<abs(counta-countb)+1<<endl;
  else
  cout<<abs(counta-countb)<<endl;
}
}