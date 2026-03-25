#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T, N, M;
  cin >> T;

  while (T--) {
    long long N, M;
    cin >> N >> M;
    if (N > M - N)
      N = M - N;

    long long re = 1;
    for (int i = 1; i <= N; i++) {
      re = re * (M - N + i) / i;
    }
    cout << re << '\n';
  }

  return 0;
}
