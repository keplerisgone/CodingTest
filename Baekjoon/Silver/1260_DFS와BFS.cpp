#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef vector<int> vi;

void dfs(vector<bool> &visited, vector<vi> &edges, vi &order, int index) {
  visited[index] = true;
  order.push_back(index);
  for (int a : edges[index]) {
    if (!visited[a])
      dfs(visited, edges, order, a);
  }
}

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
  vector<vi> edges(N + 1);

  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    edges.at(u).push_back(v);
    edges.at(v).push_back(u);
  }

  for (int i = 1; i <= N; i++) {
    sort(edges[i].begin(), edges[i].end());
  }

  vi order_dfs, order_bfs;
  vector<bool> vi_dfs(N + 1, false);
  vector<bool> vi_bfs(N + 1, false);

  order_bfs = bfs(vi_bfs, edges, R);
  dfs(vi_dfs, edges, order_dfs, R);

  for (int a : order_dfs) {
    cout << a << " ";
  }
  cout << "\n";
  for (int a : order_bfs) {
    cout << a << " ";
  }

  return 0;
}
