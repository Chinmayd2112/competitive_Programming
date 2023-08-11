#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t ;
cin>>t ;
while(t--)
{ 
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<a[i][j];
    //     }cout<<"\n";
    // }
    int  x=0,count=0,countc=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(a[i][j]=='B')
           x++;
        }
    }
    if(x==0)
    cout<<-1<<endl;
    else  if(a[r-1][c-1]=='B')
    cout<<"0"<<endl;
    else
    {
    for (int i = 0; i < m; i++)
    {
        if(a[r-1][i]=='B')
        {
         count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i][c-1]=='B')
        {
         countc++;
        }
        else
        continue;
    }
    if(count>=1 || countc>=1)
    cout<<"1"<<endl;
    else 
    cout<<"2"<<endl;
    }

   

}
}
