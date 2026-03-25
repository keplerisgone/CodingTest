#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  queue<int> q;
  int N, a;
  cin >> N;
  string str;

  while (N--) {
    cin >> str;
    if (str == "push") {
      cin >> a;
      q.push(a);
    } else if (str == "pop") {
      if (!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
      } else {
        cout << -1 << "\n";
      }
    } else if (str == "size") {
      cout << q.size() << "\n";
    } else if (str == "empty") {
      int r = q.empty() ? 1 : 0;
      cout << r << "\n";
    } else if (str == "front") {
      if (q.empty()) {
        cout << -1 << "\n";
      } else {
        cout << q.front() << "\n";
      }
    } else if (str == "back") {
      if (q.empty()) {
        cout << -1 << "\n";
      } else {
        cout << q.back() << "\n";
      }
    }
  }
  return 0;
}
