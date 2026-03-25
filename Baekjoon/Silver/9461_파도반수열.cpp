#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<long long> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(1);
  v.push_back(1);
  v.push_back(2);
  v.push_back(2);

  vector<long long> d;
  vector<long long> r;

  long long N, a;
  cin >> N;
  for (long long i = 0; i < N; i++) {
    cin >> a;
    d.push_back(a);
    r.push_back(a);
  }
  sort(r.begin(), r.end());
  for (long long i = 6; i <= r.back(); i++) {
    long long b = v[i - 5] + v[i - 1];
    v.push_back(b);
  }
  for (auto i : d) {
    cout << v[i] << "\n";
  }
  return 0;
}
