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
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ceil(double(sqrt(a[i])))!=floor(double(sqrt(a[i]))))
        count++;
    }
    if(count>=1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
}