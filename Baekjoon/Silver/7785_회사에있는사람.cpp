#include <functional>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  set<string, greater<string>> s;
  int N;
  string str1, str2;
  cin >> N;

  while (N--) {
    cin >> str1 >> str2;
    if (str2 == "enter") {
      s.insert(str1);
    } else {
      s.erase(str1);
    }
  }

  for (auto a : s) {
    cout << a + "\n";
  }
  return 0;
}
