#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int flood_fill(int size, vector<vector<bool>> &visited, vector<string> &label,
               int x, int y) {
  int houses = 0;
  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, 1, -1};
  queue<pair<int, int>> Q;
  visited[x][y] = true;
  Q.push({x, y});
  while (!Q.empty()) {
    pair<int, int> temp = Q.front();
    houses++;
    Q.pop();
    for (int i = 0; i < 4; i++) {
      int nx = temp.first + dx[i];
      int ny = temp.second + dy[i];
      if (nx >= 0 && nx < size && ny >= 0 && ny < size) {
        if (label[nx][ny] == '1' && !visited[nx][ny]) {
          visited[nx][ny] = true;
          Q.push({nx, ny});
        }
      }
    }
  }
  return houses;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<string> label;
  int N, cnt = 0, house;
  vector<int> houses;
  string temp;
  cin >> N;
  vector<vector<bool>> visited(N, vector<bool>(N, false));

  int a = N;
  while (a--) {
    cin >> temp;
    label.push_back(temp);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (label[i][j] == '1' && !visited[i][j]) {
        cnt++;
        house = flood_fill(N, visited, label, i, j);
        houses.push_back(house);
      }
    }
  }

  sort(houses.begin(), houses.end());
  cout << cnt << "\n";
  for (int b : houses) {
    cout << b << "\n";
  }

  return 0;
}
