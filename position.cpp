#include<bits/stdc++.h>
using namespace std;

void rectangle(int x1, int y1, int x2, int y2, int x, int y){
    if (x > x1 && x < x2 && y > y1 && y < y2) {
        cout << "inside_rectangle" << endl;
    } else if (x == x1 || x == x2 || y == y1 || y == y2) {
        cout << "on_rectangle" << endl;
    } else {
        cout << "outside_rectangle" << endl;
    }
}

int triangle_area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

void triangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y) {
    int A = triangle_area(x1, y1, x2, y2, x3, y3);
    int A1 = triangle_area(x, y, x2, y2, x3, y3);
    int A2 = triangle_area(x1, y1, x, y, x3, y3);
    int A3 = triangle_area(x1, y1, x2, y2, x, y);
    if (A == A1 + A2 + A3) {
        cout << "inside_triangle" << endl;
    } else {
        cout << "not_inside_triangle" << endl;
    }
}

int main() {
    int task;
    cin >> task;
    if (task == 1) {
        int x1, y1, x2, y2, x, y;
        cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
        rectangle(x1, y1, x2, y2, x, y);
    } else if (task == 2) {
        int x1, y1, x2, y2, x3, y3, x, y;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;
        triangle(x1, y1, x2, y2, x3, y3, x, y);
    } else {
        cout << "invalid" << endl;
    }
    return 0;
}
