#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if(a==1 or b==1)
    cout<<"no"<<endl;
    else if(a%2==0 or b%2==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
}