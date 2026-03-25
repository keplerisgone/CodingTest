#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    stack<int> st;
    string pt;
    cin >> pt;
    bool is = true;
    for (char a : pt) {
      if (a == '(') {
        st.push(1);
      } else {
        if (!st.empty()) {
          st.pop();
        } else {
          is = false;
          break;
        }
      }
    }
    is = (is && st.empty()) ? true : false;
    string re = is ? "YES" : "NO";
    cout << re << "\n";
  }

  return 0;
}
