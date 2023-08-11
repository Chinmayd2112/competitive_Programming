#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a, b;
        a.resize(n); // Resize the vectors
        b.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<int, int>> v;

        // Create pairs and store them in the vector v
        for (int i = 0; i < n; i++) {
            pair<int, int> temp = make_pair(a[i], i);
            v.push_back(temp);
        }

        auto compare = [](const pair<int, int>& p1, const pair<int, int>& p2) {
            if (p1.first != p2.first) {
                return p1.first < p2.first;  // Sort by first value
            } else {
                return p1.second < p2.second;  // Sort by second value if first values are equal
            }
        };

        sort(v.begin(), v.end(), compare);

        vector<int> b1(b);
        sort(b1.begin(), b1.end());

        vector<pair<int, int>> v2;

        for (int i = 0; i < n; i++) {
            pair<int, int> temp = make_pair(b1[i], v[i].first);
            v2.push_back(temp);
        }

        // sort(v2.begin(), v2.end()); // Sort v2 based on the first value of the pair

        vector<int> ans;
        for (auto x : v2) {
            ans.push_back(x.first);
        }

        for (auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
