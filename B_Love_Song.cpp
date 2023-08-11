#include<bits/stdc++.h>
using namespace std;
int main() {
  
        int n,q;
        cin>>n>>q;

        string st;
        cin>>st;
        int sum=0;
        for(int i=0;i<q;i++)
        {
            int x,y,sum=0;
            cin>>x>>y;
            for(int j=x-1;j<y;j++)
            {  
               // cout<<st[j]-'a'+1<<" ";
                sum=sum+st[j]-'a'+1;
               // cout<<sum<<endl;
             }cout<<sum<<endl;
             //break;
        
       

    }
}
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5
// 5