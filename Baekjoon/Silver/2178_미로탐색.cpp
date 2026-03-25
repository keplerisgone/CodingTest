#include <algorithm>
#include <iostream>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

int flood_fill(int size_x, int size_y, vector<vector<bool>> &visited,
               vector<string> &label, int x, int y) {
  int gx = size_x - 1, gy = size_y - 1;
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  queue<tuple<int, int, int>> Q;
  visited[x][y] = true;
  Q.push({x, y, 1});
  while (!Q.empty()) {
    auto [x, y, d] = Q.front();
    Q.pop();

    if (x == gx && y == gy) {
      return d;
    }
    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx >= 0 && nx < size_x && ny >= 0 && ny < size_y) {
        if (label[nx][ny] == '1' && !visited[nx][ny]) {
          visited[nx][ny] = true;
          Q.push({nx, ny, d + 1});
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<string> label;
  int N, M, d;
  string temp;
  cin >> N >> M;
  vector<vector<bool>> visited(N, vector<bool>(M, false));

  int a = N;
  while (a--) {
    cin >> temp;
    label.push_back(temp);
  }

  d = flood_fill(N, M, visited, label, 0, 0);

  cout << d << "\n";

  return 0;
}
