#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(k==((n-1)+(m-1)*n))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}