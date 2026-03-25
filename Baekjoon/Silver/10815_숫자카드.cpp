#include <iostream>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, a;
  set<int> s;
  cin >> N;

  while (N--) {
    cin >> a;
    s.insert(a);
  }

  cin >> M;

  while (M--) {
    cin >> a;
    auto i = s.find(a);
    int r = (i != s.end()) ? 1 : 0;
    cout << r << " ";
  }
  return 0;
}
