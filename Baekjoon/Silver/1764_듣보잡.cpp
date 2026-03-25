#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  set<string> s1;
  set<string> s2;
  set<string> s3;
  set<string> r;
  string str;

  int N, M;
  cin >> N >> M;

  while (N--) {
    cin >> str;
    s1.insert(str);
    s3.insert(str);
  }
  while (M--) {
    cin >> str;
    s2.insert(str);
    s3.insert(str);
  }

  for (auto st : s3) {
    if (s2.find(st) != s2.end() && s1.find(st) != s1.end()) {
      r.insert(st);
    }
  }

  cout << r.size() << "\n";
  for (auto st : r) {
    cout << st << "\n";
  }

  return 0;
}
