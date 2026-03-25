#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, T;
  cin >> T;
  while (T--) {
    cin >> a >> b;

    int temp = 1;
    for (int i = 0; i < b; i++) {
      temp *= a;
      temp %= 10;
    }

    temp = (temp == 0) ? 10 : temp;

    cout << temp << "\n";
  }

  return 0;
}
