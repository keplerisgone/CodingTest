#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v(6, -1);
  v[3] = v[5] = 1;

  int N;
  cin >> N;

  for (int i = 6; i <= N; i++) {
    int a = (v[i - 3] != -1) ? v[i - 3] + 1 : -1;
    int b = (v[i - 5] != -1) ? v[i - 5] + 1 : -1;

    int temp;
    if (a * b > 0) {
      temp = min(a, b);
    } else {
      temp = max(a, b);
    }
    v.push_back(temp);
  }

  cout << v[N];

  return 0;
}
