#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> tri;
  int temp;

  for (int i = 0; i < 3; i++) {
    cin >> temp;
    tri.push_back(temp);
  }

  sort(tri.begin(), tri.end());

  int result = 0;
  if (tri[2] >= tri[0] + tri[1]) {
    result = 2 * (tri[0] + tri[1]) - 1;
  } else {
    result = tri[0] + tri[1] + tri[2];
  }

  cout << result;
  return 0;
}
