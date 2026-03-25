#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long N, L, R, S;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> L >> R >> S;
    L = abs(L - S);
    R = abs(R - S);
    if (L == 0 || R == 0) {
      cout << 1 << "\n";
      continue;
    }
    if (L >= R) {
      cout << 2 * R << "\n";
    } else {
      cout << (2 * L) + 1 << "\n";
    }
  }
  return 0;
}
