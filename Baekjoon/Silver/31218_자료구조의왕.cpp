#include <iostream>
#include <vector>

using namespace std;

void cut_weed(vector<vector<int>> &, int, int, int, int, int, int);
int sum = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int N, M;
  cin >> N >> M;
  sum = N * M;

  vector<vector<int>> v(N, vector<int>(M, 0));
  int q;
  cin >> q;

  for (int idx = 0; idx < q; idx++) {
    int temp;
    cin >> temp;
    if (temp == 1) {
      int dy, dx, y, x;
      cin >> dy >> dx >> y >> x;
      cut_weed(v, dy, dx, y, x, N, M);
    } else if (temp == 2) {
      int y, x;
      cin >> y >> x;
      cout << v[y - 1][x - 1] << "\n";
    } else {
      cout << sum << "\n";
    }
  }
}

void cut_weed(vector<vector<int>> &v, int dy, int dx, int y, int x, int N,
              int M) {
  int i = y;
  int j = x;
  while (i >= 1 && i <= N && j >= 1 && j <= M) {
    if (v[i - 1][j - 1] == 1) {
      break;
    }
    v[i - 1][j - 1] = 1;
    sum--;
    i += dy;
    j += dx;
  }
}
