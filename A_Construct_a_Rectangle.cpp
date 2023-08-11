#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[0]+a[1]==a[2])
        {
            cout<<"yes"<<endl;
        }
        else if(a[1]==a[2])
        {
            if(a[0]%2==0)
            {
                cout<<"yes"<<endl;
            }
            else 
            cout<<"no "<<endl;
        }
         else if(a[1]==a[0])
        {
            if(a[2]%2==0)
            {
                cout<<"yes"<<endl;
            }
            else 
            cout<<"no "<<endl;
        }
        else
        cout<<"no "<<endl;
    }
}