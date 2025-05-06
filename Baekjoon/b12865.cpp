#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, K, W, V;
  cin >> N >> K;
  vector<int> mx(K + 1, 0);

  for (int i = 0; i < N; i++) {
    cin >> W >> V;
    for (int j = K; j >= W; j--) {
      mx[j] = max(mx[j], mx[j - W] + V);
    }
  }

  cout << mx[K];
  return 0;
}
