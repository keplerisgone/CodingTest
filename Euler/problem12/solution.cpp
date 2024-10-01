#include <iostream>
#include <map>

int prime_fact(int num) {
  std::map<int, int> m;
  int N = num;

  for (int i = 2; i * i <= N; i++) {
    while (N % i == 0) {
      if (m.find(i) != m.end()) {
        m[i]++;
      } else {
        m.insert({i, 1});
      }

      N /= i;
    }
  }

  if (N >= 2) {
    m.insert({N, 1});
  }

  for (auto it : m) {
    std::cout << "{" << it.first << "}" << it.second << "\n";
  }

  int result = 1;

  for (auto i : m) {
    result *= (i.second + 1);
  }

  return result;
}

int main(int argc, char *argv[]) {

  int temp = 0;

  while (1) {
    temp += 1;

    long long tri = temp * (temp + 1) / 2;

    int cnt = prime_fact(tri);

    std::cout << "triangular : " << tri << " divisor cnt : " << cnt
              << " temp : " << temp << "\n";

    if (cnt >= 1000) {
      break;
    }
  }

  std::cout << temp << "\n";

  return 0;
}
