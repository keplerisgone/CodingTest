#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

void dfs(vector<bool> &visited, vector<vi> &nodes, vi &nums, int &num,
         int index) {
  visited[index] = true;
  nums[index] = num++;
  for (int a : nodes[index]) {
    if (!visited[a])
      dfs(visited, nodes, nums, num, a);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, R, u, v;
  cin >> N >> M >> R;
  vector<vi> nodes(N + 1);

  for (int i = 0; i < M; i++) {
    cin >> u >> v;
    nodes.at(u).push_back(v);
    nodes.at(v).push_back(u);
  }

  for (int i = 1; i <= N; i++) {
    sort(nodes[i].begin(), nodes[i].end());
  }

  vector<bool> visited(N + 1, false);
  vi num(N + 1, 0);
  int order = 1;

  dfs(visited, nodes, num, order, R);

  for (int i = 1; i <= N; i++) {
    cout << num[i] << "\n";
  }

  return 0;
}
