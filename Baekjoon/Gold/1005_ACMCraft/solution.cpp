#include <algorithm>
#include <iostream>
#include <numeric>
#include <queue>
#include <utility>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T, N, K;
  cin >> T;

  while (T--) {
    cin >> N >> K;
    vector<vi> adj(N + 1);
    // first = time, second = min time
    vector<pair<int, int>> data(N + 1);
    vi indeg(N + 1, 0);
    // construction time
    int temp;
    for (int i = 1; i <= N; i++) {
      cin >> temp;
      data[i].first = temp;
      data[i].second = 0;
    }

    // node vector
    int u, v;
    while (K--) {
      cin >> u >> v;
      adj[u].push_back(v);
      indeg[v]++;
    }

    // indeg[i] == 0, no parent node
    queue<int> q;
    for (int i = 1; i <= N; i++) {
      if (indeg[i] == 0) {
        data[i].second = data[i].first;
        q.push(i);
      }
    }

    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (int v : adj[u]) {
        data[v].second = max(data[v].second, data[u].second + data[v].first);
        if (--indeg[v] == 0) {
          q.push(v);
        }
      }
    }

    int W;
    cin >> W;
    cout << data[W].second << "\n";
  }
  return 0;
}
