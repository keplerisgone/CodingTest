#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vi s, single;
  int N, M;
  while (M--) {
    int a, b;
    cin >> a >> b;
    s.push_back(a);
    single.push_back(b);
  }

  sort(s.begin(), s.end());
  sort(single.begin(), single.end());

  s[0] = min(s[0], single[0] * 6);
  int temp = N / 6;
  int result = s[0] * temp;
  N %= 6;
  result += min(s[0], single[0] * N);
  cout << result;

  return 0;
}
