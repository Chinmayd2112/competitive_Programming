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
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {   
            cin>>a[i];
            /* code */
        }
        int count=0;
        sort(a,a+n,greater<int>());

        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0)
            v.push_back(a[i]);
            else 
            v1.push_back(a[i]);

        }
        for (int i = 0; i <v1.size(); i++)
        {
            v.push_back(v1[i]);
        }
        
        {
            /* code */
        }
        
        for (int i = 0; i < n; i++)
        {
           for(int j=i+1;j<n;j++)
           {
            if(__gcd(v[i],2*v[j])>1)
            count++;
           } /* code */
        }
        cout<<count<<endl;
        
    }
}