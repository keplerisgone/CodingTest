#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  while (a && b && c) {
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    if (v[0] + v[1] <= v[2]) {
      cout << "Invalid\n";
      cin >> a >> b >> c;
      continue;
    }
    string result = "Scalene\n";
    for (int u : v) {
      int cnt = count(v.begin(), v.end(), u);
      if (cnt == 3) {
        result = "Equilateral\n";
        break;
      } else if (cnt == 2) {
        result = "Isosceles\n";
        break;
      }
    }
    cout << result;
    cin >> a >> b >> c;
  }

  return 0;
}
