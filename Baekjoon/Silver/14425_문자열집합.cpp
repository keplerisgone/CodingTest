#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M;
  string str;
  set<string> s;
  cin >> N >> M;
  while (N--) {
    cin >> str;
    s.insert(str);
  }

  int cnt = 0;
  while (M--) {
    cin >> str;
    if (s.find(str) != s.end()) {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}
