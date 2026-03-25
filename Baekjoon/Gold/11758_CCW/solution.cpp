#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    vector<int> vec1(2);
    vector<int> vec2(2);

    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    // 2 to 1
    vec1[0] = ax - bx;
    vec1[1] = ay - by;
    // 2 to 3
    vec2[0] = cx - bx;
    vec2[1] = cy - by;

    int temp = vec1[0] * vec2[1] - vec1[1] * vec2[0];

    if (temp > 0) {
        cout << -1 << "\n";
    } else if (temp < 0) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}
