#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, k, num;
  cin >> N >> k;
  vector<int> v;
  while (N--) {
    cin >> num;
    v.push_back(num);
  }
  sort(v.begin(), v.end(), greater<int>());
  cout << v[k - 1];
  return 0;
}
