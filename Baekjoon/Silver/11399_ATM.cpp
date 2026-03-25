#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin >> N;

  vi time(N + 1, 0);
  vi order(N);
  iota(order.begin(), order.end(), 1);

  for (int i = 1; i <= N; i++) {
    int temp;
    cin >> temp;
    time[i] = temp;
  }

  sort(order.begin(), order.end(), [&](int a, int b) {
    if (time[a] != time[b]) {
      return time[a] < time[b];
    }
    return a < b;
  });

  int re = 0, pre = 0;

  for (int a : order) {
    pre += time[a];
    re += pre;
  }

  cout << re;

  return 0;
}
