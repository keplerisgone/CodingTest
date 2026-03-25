#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, mx, temp = 0;
  cin >> n >> m;
  vector<int> data;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (i < m) {
      data.push_back(0);
      continue;
    }
    mx = max((temp + data[i - m]), data[i - 1]);
    data.push_back(mx);
  }
  int result = *(data.end() - 1);
  cout << result;
  return 0;
}
