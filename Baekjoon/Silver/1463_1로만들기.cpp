#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> v(4, 1);
  v[1] = 0;
  int N;
  cin >> N;
  for (int i = 4; i <= N; i++) {
    int a = v[i - 1] + 1;
    a = (i % 2 == 0) ? min(a, v[i / 2] + 1) : a;
    a = (i % 3 == 0) ? min(a, v[i / 3] + 1) : a;
    v.push_back(a);
  }
  cout << v[N];
  return 0;
}
