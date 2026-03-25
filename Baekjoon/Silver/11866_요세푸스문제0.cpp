#include <cstddef>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, K;
  cin >> N >> K;

  queue<int> q;
  vector<int> v;
  for (int i = 1; i <= N; i++) {
    q.push(i);
  }

  while (!q.empty()) {
    for (int i = 1; i < K; i++) {
      int temp = q.front();
      q.pop();
      q.push(temp);
    }
    int t = q.front();
    v.push_back(t);
    q.pop();
  }

  cout << "<";
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i];
    if (i != v.size() - 1) {
      cout << ", ";
    }
  }
  cout << ">";
  return 0;
}
