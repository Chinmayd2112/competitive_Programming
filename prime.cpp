#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int p_prime = 2, c_prime = 2;
    int count = 1;
    while (count <= n) {
        if (is_prime(c_prime)) {
            if (c_prime - p_prime == 2) {
                count++;
            }
            p_prime = c_prime;
        }
        c_prime++;
    }
    cout << c_prime << endl;
    return 0;
}
