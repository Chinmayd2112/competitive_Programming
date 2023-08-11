#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        if(a==1 || b==1 || a==b)
        {
            if(abs(a-b)<=d)
            cout<<"yes"<<endl;
            else 
            cout<<"no"<<endl;
        }
        // else if(d>=1)
        // cout<<"yes"<<endl;
        // else
        // cout<<"no"<<endl;

        else if(a>=b)
        {   
            if(a%b==0)
        {
             if((a/b-1)<=d)
             cout<<"yes"<<endl;
             else
             cout<<"no"<<endl;
        }
           else if((a/b)<=d)
                cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
        else
        {   
            if(b%a==0)
        {
             if((b/a-1)<=d)
             cout<<"yes"<<endl;
             else
             cout<<"no"<<endl;
        }
           else if(b/a<=d)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
    }
}
// 1 1 0
// 1 1 1
// 1 1 2
// 1 1 3
// 1 1 4
// 1 1 5
// 1 2 0
// 1 2 1
// 1 2 2
// 1 2 3
// 1 2 4
// 1 2 5
// 1 3 0
// 1 3 1
// 1 3 2
// 1 3 3
// 1 3 4
// 1 3 5
// 1 4 0
// 1 4 1
// 1 4 2
// 1 4 3
// 1 4 4
// 1 4 5
// 1 5 0
// 1 5 1
// 1 5 2
// 1 5 3
// 1 5 4
// 1 5 5
// 2 1 0
// 2 1 1
// 2 1 2
// 2 1 3
// 2 1 4
// 2 1 5
// 2 2 0
// 2 2 1
// 2 2 2
// 2 2 3
// 2 2 4
// 2 2 5
// 2 3 0
// 2 3 1
// 2 3 2
// 2 3 3
// 2 3 4
// 2 3 5
// 2 4 0
// 2 4 1
// 2 4 2
// 2 4 3
// 2 4 4
// 2 4 5
// 2 5 0
// 2 5 1
// 2 5 2
// 2 5 3
// 2 5 4
// 2 5 5
// 3 1 0
// 3 1 1
// 3 1 2
// 3 1 3
// 3 1 4
// 3 1 5
// 3 2 0
// 3 2 1
// 3 2 2
// 3 2 3
// 3 2 4
// 3 2 5
