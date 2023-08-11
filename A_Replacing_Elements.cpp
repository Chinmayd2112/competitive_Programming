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
    int d;
    cin>>d;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[n-1]<=d)
    cout<<"yes"<<endl;
    else
    {
        if((a[0]+a[1])>d)
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
}
}