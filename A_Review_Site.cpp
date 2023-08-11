#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count1=0,count2=0,count3=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]==1)
    count1++;
    else if(a[i]==2)
    count2++;
    else 
    {   count3++;
        // if(count2>count1)
        // count2++;
        // else
        // count1++;

    }
    
   }
    //cout<<count1<<endl;
     if(count1==0 & count3!=0)
    cout<<count3<<endl;
    else if(count1==0 && count3==0)
    cout<<0<<endl;
    else
     cout<<count1+count3<<endl;
    
}
}