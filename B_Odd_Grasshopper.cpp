#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       long long  int x,d;
        cin>>x>>d;
        if(x%2==0)
        {
            if(d%4==0)
            cout<<x<<endl;
            else if(d%4==1)
            cout<<x-d<<endl;
            else if(d%4==2)
            cout<<x+1<<endl;
            else
            cout<<x+d+1<<endl;
        }
        else
        {
            if(d%4==0)
            cout<<x<<endl;
            else if(d%4==1)
            cout<<x+d<<endl;
            else if(d%4==2)
            cout<<x-1<<endl;
            else
            cout<<x-d-1<<endl;
        }

    }
}