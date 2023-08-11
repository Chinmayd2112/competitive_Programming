#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,a,b;
    cin>>n>>a>>b;
    string st;
    cin>>st;
    vector<int> v;
    if(a<0)
    {
        cout<<n*(a+b)<<endl;
    }
    else{
    for(int i=1;i<n;i++)
    {
        v.push_back((a*i+b)+(a*(n-i)+b));
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    }
}
}