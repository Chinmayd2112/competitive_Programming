#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {   
            if(a[i]==1)
            count++;

            /* code */
        }
        if(n%2!=0)
        {   
            if(count==0)
            cout<<"NO"<<endl;
            
            else if(count%2==0)
            cout<<"YES"<<endl;
             
             else
            cout<<"NO"<<endl;
        }
        else
        {   
            if(count==1)
            cout<<"NO"<<endl;
            else if(count==0)
            {
                cout<<"YES"<<endl;
            }
           else if(count>=2)
        {
            if(count%2==0 || count==0)
            cout<<"YES"<<endl;
            // else if(count==1)
            // {

            // }
            else
            cout<<"NO"<<endl;
            
        }
        }
        
    }
}