#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    long long int n;
    cin>>n;
    if(n<=6)
    cout<<15<<endl;
    else if(n>10 && n<=12)
    cout<<30<<endl;

  else  if(n%6==0)
    {
        cout<<15*(n/6)<<endl;
    }
    else if(n%8==0)
    cout<<20*n/8<<endl;
    else if(n%10==0)
    cout<<25*n/10<<endl;
    else 
    {  
       
         if(n%6<=2)
        cout<<15*(n/6)+5<<endl;
        else if(n%6<=4 )
        cout<<15*(n/6)+10<<endl;
        // else if(n>pow(10,11))
        // cout<<25*n/10+3<<endl;
        else
        cout<<15*((n/6)+1)<<endl;
    }
}
}