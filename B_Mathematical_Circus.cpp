#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,m;
    cin>>n>>m;
    if(n<4)
    cout<<"no"<<endl;
    else if(n==4)
    {
    cout<<"yes"<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<3<<" "<<4<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
        for(int i=1;i<=n;i++)
        {  if(m%2==0)
            {
                if((m+i)%4==0)
            
                cout<<i<<" "<<i-1<<endl;
            
           
            else if(i%4==0)
            cout<<i-1<<" "<<i<<endl;
            }
            else
            {
                cout<<i<<" "<<i+1<<endl;
                if(i<n)
                {
                cout<<i+2<<" "<<i+3<<endl;
                }
                i=i+2;
            }
        }
    }

}
}

