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
    if((n/1000)>=1)
    cout<<10+(n/1000 -1)*10<<endl;
    else if(n/100>=1)
    cout<<6+((n/100)-1)*10<<endl;
    else if(n/10>=1)
    cout<<3+((n/10)-1)*10<<endl;
    else
    cout<<1+(n-1)*10<<endl;

}
}