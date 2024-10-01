#include <iostream>
#include <map>

int main(int argc, char *argv[]) {

  int N;
  std::cin >> N;

  std::map<int, int> primes;

  for (int i = 2; i <= N; i++) {
    int temp = i;
    std::map<int, int> temp_primes;

    for (int j = 2; j * j <= temp; j++) {
      while (temp % j == 0) {
        if (temp_primes.find(j) != temp_primes.end()) {
          temp_primes[j]++;
        } else {
          temp_primes.insert({j, 1});
        }
        temp /= j;
      }
    }
    if (temp >= 2) {
      temp_primes.insert({temp, 1});
    }

    for (auto it : temp_primes) {
      if (primes.find(it.first) != primes.end()) {
        primes[it.first] =
            (it.second > primes[it.first]) ? it.second : primes[it.first];
      } else {
        primes.insert({it.first, it.second});
      }
    }
  }

  int result = 1;

  for (auto it : primes) {
    for (int i = 0; i < it.second; i++) {
      result *= it.first;
    }
  }

  std::cout << result << "\n";

  return 0;
}
