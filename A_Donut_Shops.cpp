#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int a,b,c,x,sum=0;
    cin>>a>>b>>c;
    if(c<a and b>1)
    cout<<"-1"<<" "<<"1"<<endl;
    else  if(c==a and b>1)
    cout<<"-1"<<" "<<"2"<<endl;
    else if(a>c/b)
    {
        cout<<"1"<<" "<<b<<endl;

    }
    else
    cout<<"1"<<" "<<"-1"<<endl;

}
}