#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, B, temp;
  string e;

  cin >> N >> B;

  while (N > 0) {
    temp = N % B;
    if (temp >= 10) {
      e += (char)(temp - 10) + 'A';
    } else {
      e += (char)temp + '0';
    }
    N /= B;
  }

  reverse(e.begin(), e.end());
  cout << e;

  return 0;
}
