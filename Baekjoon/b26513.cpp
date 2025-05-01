#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = -1, a = 1, b = -1;
  cin >> n >> b;
  while (n != 0 && b != 0) {
    a = 1;
    for (int i = 0; i < n; i++) {
      int temp;
      string state;
      cin >> temp >> state;
      if (state == "SAFE") {
        a = (a < temp) ? temp : a;
      } else {
        b = (b > temp) ? temp : b;
      }
    }
    if ((b - a) == 1) {
      cout << b << " " << a << "\n";
      /*cout << "Type 1\n";*/
    } else {
      cout << (a + 1) << " " << (b - 1) << "\n";
      /*cout << "Type 2\n";*/
    }
    cin >> n >> b;
  }
  return 0;
}
