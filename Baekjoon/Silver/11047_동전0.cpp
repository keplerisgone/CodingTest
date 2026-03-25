#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, K, re = 0;
  cin >> N >> K;

  vector<int> v;

  while (N--) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  reverse(v.begin(), v.end());
  for (int a : v) {
    if (K / a > 0) {
      re += K / a;
      K %= a;
    }
  }

  cout << re;

  return 0;
}
