#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  stack<int> st;
  int K, temp;
  cin >> K;
  while (K--) {
    cin >> temp;
    if (!temp) {
      st.pop();
      continue;
    }
    st.push(temp);
  }
  long long e = 0;
  while (!st.empty()) {
    e += st.top();
    st.pop();
  }
  cout << e;

  return 0;
}
