#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c, d, e, f, nx, ny;
  cin >> a >> b >> c >> d >> e >> f;

  for (int x = -999; x <= 999; x++) {
    for (int y = -999; y <= 999; y++) {
      if (a * x + b * y == c && d * x + e * y == f) {
        nx = x;
        ny = y;
        goto END;
      }
    }
  }
END:

  cout << nx << " " << ny;
  return 0;
}
