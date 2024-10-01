#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main(int argc, char *argv[]) {

  int N;
  std::cin >> N;

  std::map<int, int> primes;

  for (int i = 2; i <= N; i++) {
    int temp = i;

    for (int j = 2; j * j <= temp; j++) {
      while (temp % j == 0) {
        if (primes.find(j) != primes.end()) {
          primes[j]++;
        } else {
          primes.insert({j, 1});
        }
        temp /= j;
      }
    }
    if (temp >= 2) {
      if (primes.find(temp) != primes.end()) {
        primes[temp]++;
      } else {
        primes.insert({temp, 1});
      }
    }
  }

  for (auto it : primes) {
    std::cout << "key : " << it.first << " value : " << it.second << "\n";
  }

  int min_prime = std::min(primes[2], primes[5]);
  primes[2] -= min_prime;
  primes[5] -= min_prime;

  long long result = 1;
  for (auto it : primes) {
    for (int i = 0; i < it.second; i++) {
      result *= it.first;
    }
  }

  std::string num_str = std::to_string(result);

  int sum = 0;

  for (char ch : num_str) {
    sum += (ch - '0');
  }

  std::cout << N << "! = " << result << "\nsum = " << sum << "\n";

  return 0;
}
