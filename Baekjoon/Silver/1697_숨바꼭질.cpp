#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
typedef vector<int> vi;

int bfs(vector<bool> &visited, int &idx, int K) {
  if (idx > K) {
    return idx - K;
  }
  queue<pair<int, int>> Q;
  visited[idx] = true;
  Q.push({idx, 0});
  while (!Q.empty()) {
    auto [u, d] = Q.front();
    Q.pop();
    if (u == K) {
      return d;
    }
    for (auto v : {u + 1, u - 1, u * 2}) {
      if (v < 0 || v > 100000) {
        continue;
      }
      if (!visited[v]) {
        visited[v] = true;
        Q.push({v, d + 1});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, K;
  cin >> N >> K;

  vector<bool> visited(100001, false);

  int times = bfs(visited, N, K);
  cout << times << "\n";

  return 0;
}
