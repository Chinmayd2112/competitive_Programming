#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
  long long int  n;
    cin>>n;
    if (n%2==0)
    {
        cout<<n-3<<" "<<2<<" "<<1<<endl;
 
        
    }
    else
    {
        if (((n-1)/2)%2!=0)
        {
            cout<<(n-1)/2+2<<" "<<(n-1)/2-2<<" "<<1<<endl;
        }
        else
        {
            
            cout<<(n-1)/2+1<<" "<<(n-1)/2-1<<" "<<1<<endl;
            
            
        }
        
        
    }
}
}