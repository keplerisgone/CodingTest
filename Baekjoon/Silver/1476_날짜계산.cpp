#include <iostream>
using namespace std;

int main() {
  // modulo operation

  int a, result, c;
  cin >> a >> result >> c;
  a = a % 15;
  c = c % 19;
  while (1) {
    if ((result % 15) == a) {
      if ((result % 19) == c) {
        break;
      }
    }
    result += 28;
  }

  cout << result;
  return 0;
}
