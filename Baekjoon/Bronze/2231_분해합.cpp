#include <iostream>
using namespace std;

int ce(int num) {
  int result = num;
  while (num > 0) {
    result += num % 10;
    num /= 10;
  }
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, temp;
  cin >> N;
  for (int i = 0; i < N; i++) {
    temp = ce(i);
    if (temp == N) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
  return 0;
}
