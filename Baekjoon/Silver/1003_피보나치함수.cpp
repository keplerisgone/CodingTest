#include <algorithm>
#include <functional>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T, temp;
  vector<int> test, pri;
  cin >> T;
  while (T--) {
    cin >> temp;
    test.push_back(temp);
    pri.push_back(temp);
  }
  sort(test.begin(), test.end(), greater<int>());

  vector<pair<int, int>> cnt(test[0] + 1);
  cnt[0].first = 1;
  cnt[0].second = 0;
  cnt[1].first = 0;
  cnt[1].second = 1;
  for (int i = 2; i <= test[0]; i++) {
    cnt[i].first = cnt[i - 1].first + cnt[i - 2].first;
    cnt[i].second = cnt[i - 1].second + cnt[i - 2].second;
  }

  for (int a : pri) {
    cout << cnt[a].first << " " << cnt[a].second << "\n";
  }

  return 0;
}
