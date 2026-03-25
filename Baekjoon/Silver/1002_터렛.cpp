#include <cmath>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long N, a, b, c, x, y, z;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> a >> b >> c >> x >> y >> z;
    long long r = (a - x) * (a - x) + (b - y) * (b - y);

    if (r == 0 && c == z) {
      cout << -1 << "\n";
    } else if (r == (c - z) * (c - z)) {
      cout << 1 << "\n";
    } else if (r < (c - z) * (c - z)) {
      cout << 0 << "\n";
    } else if (r == (c + z) * (c + z)) {
      cout << 1 << "\n";
    } else if (r < (c + z) * (c + z)) {
      cout << 2 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
  return 0;
}
