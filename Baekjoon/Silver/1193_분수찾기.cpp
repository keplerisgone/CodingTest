#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, x = 1, y = 1;
  cin >> N;
  bool direction = true;

  for (int i = 1; i < N; i++) {
    if (direction) {
      if (x == 1) {
        y++;
        direction = !direction;
      } else {
        x--;
        y++;
      }
    } else {
      if (y == 1) {
        x++;
        direction = !direction;
      } else {
        x++;
        y--;
      }
    }
  }

  cout << x << '/' << y;

  return 0;
}
