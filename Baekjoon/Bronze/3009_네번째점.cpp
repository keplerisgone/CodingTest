#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vi x;
  vi y;
  int temp, cnt = 0;
  for (int i = 0; i < 3; i++) {
    cin >> temp;
    x.push_back(temp);
    cin >> temp;
    y.push_back(temp);
  }

  for (int a : x) {
    if (count(x.begin(), x.end(), a) == 1) {
      cout << a << " ";
    }
  }
  for (int b : y) {
    if (count(y.begin(), y.end(), b) == 1) {
      cout << b << "\n";
    }
  }
  return 0;
}
