#include <cctype>
#include <iostream>
#include <map>
#include <string>
using namespace std;

bool is_number(const string &s) {
  for (char c : s) {
    if (!isdigit(c)) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, a, num = 1;
  cin >> N >> M;
  map<string, int> m1;
  map<int, string> m2;
  string str;

  while (N--) {
    cin >> str;
    m1.insert({str, num});
    m2.insert({num, str});
    num++;
  }

  while (M--) {
    cin >> str;
    if (is_number(str)) {
      a = stoi(str);
      cout << m2[a] << "\n";
    } else {
      cout << m1[str] << "\n";
    }
  }
  return 0;
}
