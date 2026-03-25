#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v;
  int N, a;
  cin >> N;
  while (N--) {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int b : v) {
    cout << b << "\n";
  }

  return 0;
}
