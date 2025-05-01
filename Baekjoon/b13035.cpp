#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;
  long long a, b, c;
  for (int i = 0; i < N; i++) {
    cin >> a >> b >> c;
    a = a * b;
    c = 1LL * c * c;
    if (a < c) {
      cout << c << "\n";
      continue;
    }
    long long q = (a + c / 2) / c;
    cout << c * q << "\n";
  }
  return 0;
}
