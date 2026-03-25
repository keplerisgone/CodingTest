#include <iostream>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
typedef vector<int> vi;

int bfs(int size, vector<vector<bool>> &visited, pair<int, int> a,
        pair<int, int> b) {
  queue<tuple<int, int, int>> Q;
  int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
  int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
  visited[a.first][a.second] = true;
  Q.push({a.first, a.second, 0});
  while (!Q.empty()) {
    auto [u, v, d] = Q.front();
    Q.pop();
    if (u == b.first && v == b.second) {
      return d;
    }
    for (int i = 0; i < 8; i++) {
      int nx = u + dx[i];
      int ny = v + dy[i];
      if (nx < 0 || ny < 0 || nx >= size || ny >= size) {
        continue;
      }
      if (!visited[nx][ny]) {
        visited[nx][ny] = true;
        Q.push({nx, ny, d + 1});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int K, I, X, Y;
  cin >> K;

  while (K--) {
    cin >> I >> X >> Y;
    vector<vector<bool>> visited(I, vector<bool>(I, false));
    pair<int, int> a = {X, Y};
    cin >> X >> Y;
    pair<int, int> b = {X, Y};
    int result = bfs(I, visited, a, b);
    cout << result << "\n";
  }

  return 0;
}
