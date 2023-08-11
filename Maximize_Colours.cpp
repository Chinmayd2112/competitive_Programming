#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    if(a[0]==0)
    {   if(a[2]==0)
        cout<<0<<endl;
        else if(a[1]==0)
        cout<<1<<endl;
        else if(a[1]==1)
        cout<<2<<endl;
        else
        cout<<3<<endl;
    } 
    else if(a[0]==1)
    {
        if(a[1]==1)
        cout<<3<<endl;
        else if(a[1]>=2)
        cout<<4<<endl;
       
    }
    else if(a[0]==2)
    {
        if(a[1]==2 and a[2]==2)
        cout<<4<<endl;
        else if(a[1]==2 and a[2]>=2)
        cout<<5<<endl;
        else if(a[1]>2)
        cout<<5<<endl;
       
        
    }
     else
        cout<<6<<endl;

}
}