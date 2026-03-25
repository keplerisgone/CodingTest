#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> cnt(26, 0);
  string str;
  cin >> str;
  for (char &c : str) {
    c = tolower(c) - 'a';
    cnt[(int)c]++;
  }

  int idx, mx = 0;
  bool re = false;
  for (int i = 0; i < 26; i++) {
    if (cnt[i] == mx) {
      re = true;
    } else if (cnt[i] > mx) {
      mx = cnt[i];
      idx = i;
      re = false;
    }
  }
  cout << (re ? '?' : (char)('A' + idx)) << "\n";
  return 0;
}
