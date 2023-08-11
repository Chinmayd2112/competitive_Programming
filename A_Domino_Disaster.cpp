#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string st;
        cin>>st;
        for(int i=0;i<n;i++)
        {
            if(st[i]=='L')
            cout<<"L";
            else if(st[i]=='R')
            cout<<"R";
            else if(st[i]=='D')
            cout<<"U";
            else
            cout<<"D";
        }
        cout<<"\n";
    }
}