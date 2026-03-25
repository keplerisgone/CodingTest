#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  unordered_map<string, double> gpa = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5},
                                       {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
                                       {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};
  string name, grade;
  double value, total;
  int cnt = 0;

  for (int i = 0; i < 20; i++) {
    cin >> name >> value >> grade;
    if (grade == "P")
      continue;
    total += gpa[grade] * value;
    cnt += value;
  }

  cout << total / (double)cnt;
  return 0;
}
