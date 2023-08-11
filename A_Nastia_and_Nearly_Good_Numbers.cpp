#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
   long long int a,b;
    cin>>a>>b;
    long long int sum=a*b;
    if(b==1)
    cout<<"no"<<endl;
    else
    {
    cout<<"yes"<<endl;
    cout<<sum<<" "<<a<<" "<<a+sum<<endl;
    }
    }
}
