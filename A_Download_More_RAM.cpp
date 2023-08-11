#include <bits/stdc++.h>
using namespace std;
bool nik(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //    cout<<b[i]<<" ";

        // }
        int i = 0;
        vector<pair<int, int>> v1;
        for (i = 0; i < n; i++)
        {
            v1.push_back(make_pair(a[i], b[i]));
        }
        sort(v1.begin(), v1.end(), nik);
        // for(auto e:v1)
        // {
        //     cout<<e.first<<" "<<e.second<<" ";
        // }
        // cout<<endl;
        for(auto d:v1)
        {
            if(r>=d.first)
            r=r+d.second;
        }
        cout<<r<<endl;
        // {
        //     if(r>=v1[i])
        //      {   //cout<<i<<" ";
        //         r=r+v[i];
        //     //   //  i=0;
        //     //    // break;
        //     }
    }
    // cout<<r<<endl;
    // bool mypair(pair<int, int> p1, pair<int, int> p2)
    // {
    //     return p1.first < p2.first;
    // }
}

// bool mypair(pair<int,int> p1,pair<int,int> p2)
// {
// return p1.first<p2.first;
// }