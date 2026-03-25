#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, cnt = 0;
  bool isPrime = false;
  cin >> N;
  while (N--) {
    int K;
    cin >> K;
    if (K == 1) {
      continue;
    }
    isPrime = true;
    for (int i = 2; i * i <= K; i++) {
      if (K % i == 0) {
        isPrime = false;
        break;
      }
    }
    cnt += (isPrime) ? 1 : 0;
  }

  cout << cnt;
  return 0;
}
