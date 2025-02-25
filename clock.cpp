#include <iostream>
#include <cmath>

using namespace std;

// Function to check if three points are collinear
bool collinear(int a, int b, int c) {
    return abs(a - b) + abs(b - c) == abs(a - c);
}

// Function to check if two line segments intersect
bool doIntersect(int a, int b, int c, int d) {
    // Check if the endpoints of one segment are on opposite sides of the other segment
    if ((a < c && b > d) || (a > c && b < d))
        return true;
    // Check if the endpoints of both segments are collinear and lie within the range of the other segment
    if (collinear(a, c, d) && (a <= c && c <= b || a <= d && d <= b))
        return true;
    if (collinear(b, c, d) && (a <= c && c <= b || a <= d && d <= b))
        return true;
    if (collinear(c, a, b) && (c <= a && a <= d || c <= b && b <= d))
        return true;
    if (collinear(d, a, b) && (c <= a && a <= d || c <= b && b <= d))
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (doIntersect(a, b, c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
