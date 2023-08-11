#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int t;
    cin >>t;
    if(t<=9)
    cout<<t<<endl;
    else if(t>9 && t<18)
    cout<<9+10*(t-9)<<endl;
    else if(t>=18 && t<=24)
    cout<<189+(t-18)*100<<endl;
    else if(t>24 && t<=30)
    cout<<789+(t-24)*1000<<endl;
    else if(t>30 && t<=35)
    cout<<6789+(t-30)*10000<<endl;
    else if(t>35 && t<=39)
    cout<<56789+(t-35)*100000<<endl;
    else if(t>39 && t<=42)
    cout<<456789+(t-39)*1000000<<endl;
    else if(t>42 && t<=44)
    cout<<3456789+(t-42)*10000000<<endl;
    else if(t==45)
    cout<<123456789<<endl;
    else
    cout<<-1<<endl;
}
}