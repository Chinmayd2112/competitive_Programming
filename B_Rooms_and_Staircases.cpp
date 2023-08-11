#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binaryExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll resp = binaryExp(a, b / 2);
    if (b & 1) // b is odd
        return a * (resp)*resp;
    else
        return resp * resp;
}
int par[2005];
int rank1[2005];
int findpar(int x)
{
    if (x == par[x])
    {
        return x;
    }
    return par[x] = findpar(par[x]);
}
void Union(int a, int b)
{
    a = findpar(a);
    b = findpar(b);
    if (a != b)
    {
        if (rank1[a] < rank1[b])
            swap(a, b);
        par[b] = a;
        if (rank1[a] == rank1[b])
            rank1[a]++;
    }
}
int main()
{

    {
        int n, m;
        cin >> n >> m;
        vector<int> h;
        vector<int> mo;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            h.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mo.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            c.push_back(x);
        }
        vector<pair<int, int>> temp;
        for (int i = 0; i < m; i++)
        {
            temp.push_back({mo[i], i});
        }
        sort(temp.begin(), temp.end());
        vector<int> rada;

        for (auto x : temp)
        {
            // cout<<x.first<<" "<<x.second<<endl;
            rada.push_back(c[x.second]);
        }
        vector<int> sum;
        sum.push_back(rada[0]);
        for (int i = 1; i < m; i++)
        {
            sum.push_back(sum[i - 1] + rada[i]);
        }
        sort(mo.begin(), mo.end());
        vector<int> ans;
        for (auto x : h)
        {
            auto it = upper_bound(mo.begin(), mo.end(), x);
            if (it == mo.begin())
            {
                ans.push_back(0);
                continue;
            }
            it--;
            int index = it - mo.begin();
            ans.push_back(sum[index]);
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}