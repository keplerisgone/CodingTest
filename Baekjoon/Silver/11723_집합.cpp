#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  set<int> s;
  int M, a;
  cin >> M;
  string str;
  while (M--) {
    cin >> str;
    if (str == "add") {
      cin >> a;
      s.insert(a);
    } else if (str == "remove") {
      cin >> a;
      s.erase(a);
    } else if (str == "check") {
      cin >> a;
      auto i = s.find(a);
      int r = (i != s.end()) ? 1 : 0;
      cout << r << "\n";
    } else if (str == "toggle") {
      cin >> a;
      auto i = s.find(a);
      if (i != s.end()) {
        s.erase(a);
      } else {
        s.insert(a);
      }
    } else if (str == "all") {
      for (int i = 1; i <= 20; i++) {
        s.insert(i);
      }
    } else {
      s.clear();
    }
  }
  return 0;
}
