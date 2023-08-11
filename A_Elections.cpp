#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int a,b,c;
    cin>>a>>b>>c;
    int ans1,ans2;
    ans1=(a<=b)?(b-a)+1:0;
    ans2=(a<=c)?(c-a)+1:0;
    cout<<max(ans1,ans2)<<" ";
    ans1=(a>=b)?(a-b)+1:0;
    ans2=(b<=c)?(c-b)+1:0;
    cout<<max(ans1,ans2)<<" ";
    ans1=(a>=c)?(a-c)+1:0;
    ans2=(b>=c)?(b-c)+1:0;
    cout<<max(ans1,ans2)<<endl;
    }
 
}