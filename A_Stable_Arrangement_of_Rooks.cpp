#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int count=0;
        if(n%2==1 && k<=((n/2)+1))
        {
         for (int i=0;i<n;i++)
         {
            for(int j=0;j<n;j++)
            {  
              //if(i%2==0 )
            //  {
               if(i==j)
              {
                if(i%2==0 && j%2==0)
                {
               
                count++;
                if(count>k)
                cout<<".";
                else
                 cout<<"R";
                }
                else
                cout<<".";
              }
             // }
            else 
            cout<<"." ;
            } 
            cout<<"\n";
           
         }
       }
      else  if(n%2==0 && k<=((n/2)))
        {
         for (int i=0;i<n;i++)
         {
            for(int j=0;j<n;j++)
            {  
              //if(i%2==0 )
            //  {
               if(i==j)
              {
                if(i%2==0 && j%2==0)
                {
               
                count++;
                if(count>k)
                cout<<".";
                else
                 cout<<"R";
                }
                else
                cout<<".";
              }
             // }
            else 
            cout<<".";
            } 
            cout<<"\n";
           
         }
       }
       else
       cout<<"-1"<<endl;
    }
}