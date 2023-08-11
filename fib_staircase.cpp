#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= a; j++) {
            cout << "*";
        }
        cout << endl;
        int c = a + b;
        b = a;
        a = c;
    }
    return 0;
}
