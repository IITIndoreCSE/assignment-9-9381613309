#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];
    int countFirstQuadrant = 0;

    // Read 7 points from user input
    cout << "Enter coordinates for 7 points (x y):
";
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    // Count points lying in the first quadrant
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0)
            countFirstQuadrant++;
    }

    // Display result
    cout << "
Number of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}

