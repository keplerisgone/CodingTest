#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  map<string, string> m;
  int N, M;
  string str1, str2;
  cin >> N >> M;
  while (N--) {
    cin >> str1 >> str2;
    m[str1] = str2;
  }
  while (M--) {
    cin >> str1;
    cout << m[str1] + "\n";
  }
  return 0;
}
