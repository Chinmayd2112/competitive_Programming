#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,b,c;
    cin>>n>>b>>c;
    int a[n];
     vector<int>v;
        for(int i=n; i>0; i--){
            v.push_back(i);
        }
        for(int i=0; i<n; i++){
            if(v[i] == i+1){
                swap(v[i],v[i+1]);
            }
        }
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
   // }
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    if(b<=n/2 and c<=n/2 or b>n/2 or c<n/2)
    cout<<-1<<endl;
}
}