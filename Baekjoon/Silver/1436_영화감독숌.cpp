#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int num = 0, N;
  cin >> N;

  while (N) {
    num++;
    string s_num = to_string(num);
    size_t found = s_num.find("666");
    if (found != string::npos) {
      N--;
    }
  }

  cout << num;
  return 0;
}
