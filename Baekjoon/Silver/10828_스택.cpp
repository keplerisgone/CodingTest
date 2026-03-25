#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  stack<int> st;
  cin >> N;

  while (N--) {
    string str;
    cin >> str;
    if (str == "push") {
      int a;
      cin >> a;
      st.push(a);
    } else if (str == "pop") {
      if (!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
      } else {
        cout << -1 << "\n";
      }
    } else if (str == "top") {
      if (!st.empty()) {
        cout << st.top() << "\n";
      } else {
        cout << -1 << "\n";
      }

    } else if (str == "empty") {
      int re = (st.empty()) ? 1 : 0;
      cout << re << "\n";
    } else if (str == "size") {
      cout << st.size() << "\n";
    }
  }

  return 0;
}
