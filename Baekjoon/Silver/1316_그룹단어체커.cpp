#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isGroupWord(const string &word) {
  vector<bool> seen(26, false);
  int prev = -1;

  for (char c : word) {
    int current = c - 'a';
    if (current == prev)
      continue;
    if (seen[current])
      return false;
    seen[current] = true;
    prev = current;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, result = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    if (isGroupWord(str)) {
      result++;
    }
  }

  cout << result;

  return 0;
}
