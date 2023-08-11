#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{ 
    double a,b;
    cin>>a>>b;
  double c= max(a,b)/min(a,b);
 // cout<<c<<endl;
   if(ceil(log2(c))==floor(log2(c)))
   cout<<"yes"<<endl;
   else
   cout<<"no"<<endl;
}
}