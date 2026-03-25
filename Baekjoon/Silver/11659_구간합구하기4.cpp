#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> v(1, 0);
  int N, M, i, j, a;
  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    cin >> a;
    v.push_back(v[i - 1] + a);
  }
  while (M--) {
    cin >> i >> j;
    cout << v[j] - v[i - 1] << "\n";
  }
  return 0;
}
