#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void flood_fill(int size_x, int size_y, vector<vector<bool>> &visited,
                vector<vector<int>> &label, int x, int y) {
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  queue<pair<int, int>> Q;
  visited[x][y] = true;
  Q.push({x, y});
  while (!Q.empty()) {
    pair<int, int> temp = Q.front();
    Q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = temp.first + dx[i];
      int ny = temp.second + dy[i];
      if (nx >= 0 && nx < size_x && ny >= 0 && ny < size_y) {
        if (label[nx][ny] == 1 && !visited[nx][ny]) {
          visited[nx][ny] = true;
          Q.push({nx, ny});
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T;
  cin >> T;

  while (T--) {

    int M, N, K, x, y, cnt = 0;
    cin >> M >> N >> K;
    vector<vector<int>> label(N, vector<int>(M, 0));
    vector<vector<bool>> visited(N, vector<bool>(M, false));

    while (K--) {
      cin >> y >> x;
      label[x][y] = 1;
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (label[i][j] == 1 && !visited[i][j]) {
          cnt++;
          flood_fill(N, M, visited, label, i, j);
        }
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}
