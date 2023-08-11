#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int l,r,k,cnt=0;
    cin>>l>>r>>k;
    if(l==r){
        if(l==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else {
    int diff=r-l;
    if(l%2==0 && r%2==0)
    {   
        cnt=diff/2;
        
    }
    else {
    cnt=(diff/2)+1;
}
    if(cnt<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
    
}
}