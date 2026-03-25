#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <queue>
#include <vector>
using namespace std;
typedef vector<int> vi;

vi bfs(vector<bool> &visited, vector<vi> &edges, int &idx) {
  vi order;
  queue<int> Q;
  visited[idx] = true;
  Q.push(idx);
  while (!Q.empty()) {
    int u = Q.front();
    order.push_back(u);
    Q.pop();
    for (auto v : edges[u]) {
      if (!visited[v]) {
        visited[v] = true;
        Q.push(v);
      }
    }
  }
  return order;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M, R, u, v;
  cin >> N >> M >> R;

  vector<bool> visited(N + 1, false);
  vector<vi> edges(N + 1);
  while (M--) {
    cin >> u >> v;
    edges[u].push_back(v);
    edges[v].push_back(u);
  }

  for (int i = 1; i <= N; i++) {
    sort(edges[i].begin(), edges[i].end(), greater<int>());
  }

  vi order = bfs(visited, edges, R);
  vi nodes(N + 1, 0);
  int a = 1;
  for (int b : order) {
    nodes[b] = a;
    a++;
  }

  for (int i = 1; i <= N; i++) {
    cout << nodes[i] << "\n";
  }

  return 0;
}
