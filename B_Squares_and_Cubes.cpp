#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
 double a;
    cin>>a;
    int c=0,d=0,e=0;
    vector<int> v;
   // cout<<sqrt(a)<<endl;
    for(int i=1;i<=sqrt(a);i++)
    {
         if(i*i<=(a))
          v.push_back(i*i);

    }

    for(int i=1;i<=cbrt(a);i++)
    {
        if(i*i*i<=(a))
        v.push_back(i*i*i);
    }
    unordered_set<int>s(v.begin(),v.end());
    v.assign(s.begin(),s.end());
    cout<<v.size()<<endl;

}
}