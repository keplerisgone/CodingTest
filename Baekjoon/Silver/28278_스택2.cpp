#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, C, temp;
  stack<int> st;
  cin >> N;

  while (N--) {
    cin >> C;
    if (C == 1) {
      cin >> temp;
      st.push(temp);
    } else if (C == 2) {
      if (!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
      } else {
        cout << -1 << "\n";
      }
    } else if (C == 5) {
      if (!st.empty()) {
        cout << st.top() << "\n";
      } else {
        cout << -1 << "\n";
      }

    } else if (C == 4) {
      int re = (st.empty()) ? 1 : 0;
      cout << re << "\n";
    } else if (C == 3) {
      cout << st.size() << "\n";
    }
  }

  return 0;
}
