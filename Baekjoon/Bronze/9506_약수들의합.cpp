#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
typedef long long ll;

vector<pair<ll, int>> factorize(ll n) {
  vector<pair<ll, int>> re;
  if (n <= 1)
    return re;
  int cnt = 0;
  while (n % 2 == 0) {
    n /= 2;
    cnt++;
  }
  if (cnt) {
    re.push_back({2, cnt});
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      int c = 0;
      do {
        n /= i;
        c++;
      } while (n % i == 0);
      re.push_back({i, c});
    }
  }
  if (n > 1) {
    re.push_back({n, 1});
  }
  return re;
}

vector<ll> divisors(const vector<pair<ll, int>> &pf) {
  vector<ll> d = {1};
  for (auto [p, e] : pf) {
    ll mul = 1;
    size_t sz = d.size();
    for (int i = 1; i <= e; i++) {
      mul *= p;
      for (size_t j = 0; j < sz; j++) {
        d.push_back(d[j] * mul);
      }
    }
  }
  sort(d.begin(), d.end());
  return d;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  while (1) {
    ll n;
    cin >> n;
    if (n == -1)
      break;

    auto pf = factorize(n);
    auto d = divisors(pf);

    ll sum = 0;
    for (auto a : d) {
      sum += a;
    }
    sum -= n;

    if (n == sum) {
      cout << n << " = ";
      for (size_t j = 0; j < d.size() - 1; j++) {
        if (j)
          cout << " + ";
        cout << d[j];
      }
      cout << "\n";
    } else {
      cout << n << " is NOT perfect.\n";
    }
  }

  return 0;
}
