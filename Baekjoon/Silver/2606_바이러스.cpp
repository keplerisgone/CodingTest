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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, u, v;
  cin >> N >> M;
  vector<vi> edges(N + 1);

  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    edges.at(u).push_back(v);
    edges.at(v).push_back(u);
  }

  vi order_dfs;
  vector<bool> vi_dfs(N + 1, false);

  dfs(vi_dfs, edges, order_dfs, 1);

  cout << order_dfs.size() - 1;

  return 0;
}
