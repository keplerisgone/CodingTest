#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> tri;
  int temp, sum = 0;
  for (int i = 0; i < 3; i++) {
    cin >> temp;
    sum += temp;
    tri.push_back(temp);
  }

  int cnt = count(tri.begin(), tri.end(), 60);
  string result;

  if (sum == 180) {
    result = "Scalene";

    if (cnt == 3) {
      result = "Equilateral";
    }

    for (int a : tri) {
      int b = count(tri.begin(), tri.end(), a);
      if (b == 2) {
        result = "Isosceles";
        break;
      }
    }
  } else {
    result = "Error";
  }

  cout << result;
  return 0;
}
