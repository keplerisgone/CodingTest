#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v;
  int N;
  cin >> N;
  while (N--) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  for (int b : v) {
    cout << b << "\n";
  }

  return 0;
}
