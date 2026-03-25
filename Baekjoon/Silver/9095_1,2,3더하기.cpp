#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> v(4, 0);
  vector<int> r;
  vector<int> d;
  v[1] = 1;
  v[2] = 2;
  v[3] = 4;

  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    r.push_back(a);
    d.push_back(a);
  }
  sort(r.begin(), r.end());
  for (int i = 4; i <= r.back(); i++) {
    int a = v[i - 1] + v[i - 2] + v[i - 3];
    v.push_back(a);
  }
  for (int j = 0; j < N; j++) {
    cout << v[d[j]] << "\n";
  }
  return 0;
}
