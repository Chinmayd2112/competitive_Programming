#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int x,m;
    cin>>x>>m;
    if(x>0 and m>0 )
    cout<<0<<" "<<m<<" "<<(3*x)-m<<endl;
    else if(x<=0 and m<0)
    cout<<m-1<<" "<<m<<" "<<3*x-(m+m-1)<<endl;
    else if(x<0 and m>0)
    cout<<3*x-2*m<<" "<<m<<" "<<m<<endl;
    else if(x==0 and m>0)
    cout<<-m<<" "<<m<<" "<<0<<endl;
    // else if(x==0 and m<0)
    // cout<<m-1<<" "<<m<<" "<<
    
}
}