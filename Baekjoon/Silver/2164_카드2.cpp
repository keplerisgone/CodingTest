#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  queue<int> q;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  while (q.size() != 1) {
    q.pop();
    int temp = q.front();
    q.push(temp);
    q.pop();
  }

  cout << q.front();
  return 0;
}
