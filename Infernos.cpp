#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(*max_element(a,a+n)<=x )
    {
        if(*max_element(a,a+n)<n)
        cout<<*max_element(a,a+n)<<endl;
        else
           cout<<n<<endl;

    }
 
    else 
    cout<<*min_element(a,a+n)<<endl;
}
}