#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  priority_queue<int> q;
  int N, temp;
  cin >> N;
  while (N--) {
    cin >> temp;
    if (temp) {
      q.push(temp);
    } else {
      if (q.empty()) {
        cout << 0 << "\n";
        continue;
      }
      cout << q.top() << "\n";
      q.pop();
    }
  }
  return 0;
}
