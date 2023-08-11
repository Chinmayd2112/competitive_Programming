#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y,sum=0,a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
           sum=sum+ abs(a-x)+abs(b-y);
           a=x;b=y;
           if(i==n-1)
           sum=sum+abs(0-a)+abs(0-b);
           
        }
        cout<<sum<<endl;
    }
}