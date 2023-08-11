#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{ 
    long long int a,b,count=0;
    cin>>a>>b;
    if(b>a)
    swap(a,b);
    long long int diff=abs(a-b);
    if(diff==0)
    cout<<"0"<<" "<<"0"<<endl;
    else 
    {
   
    
    cout<<diff<<" "<<min(diff-a%diff,a%diff)<<endl;
    // else
    // cout<<diff<<" "<<j<<endl;
    }
}
}
