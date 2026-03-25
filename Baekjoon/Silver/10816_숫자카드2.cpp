#include <iostream>
#include <map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, a;
  map<int, int> m;
  cin >> N;
  while (N--) {
    cin >> a;
    if (m.find(a) != m.end()) {
      m[a]++;
    } else {
      m[a] = 1;
    }
  }

  cin >> M;
  while (M--) {
    cin >> a;
    cout << m[a] << " ";
  }
  return 0;
}
