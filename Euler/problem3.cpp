#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

bool is_prime_number(int64_t num);

int main(int argc, char *argv[]) {
  int64_t arg = std::stoll(argv[1]);

  std::vector<int64_t> prime_v;

  for (int64_t i = 2; i * i <= arg; i++) {
    prime_v.push_back(i);
  }

  std::vector<int64_t>::iterator iter;
  iter = prime_v.begin();

  while (iter != prime_v.end()) {
    int64_t number = *iter;
    std::vector<int64_t>::iterator test_iter;
    for (test_iter = iter + 1; test_iter != prime_v.end();) {
      if (*test_iter % number == 0) {
        prime_v.erase(test_iter);
      } else {
        test_iter++;
      }
    }
    iter++;
  }

  int64_t max = 0;

  iter = prime_v.end() - 1;

  for (; iter != prime_v.begin(); iter--) {
    if (arg % *iter == 0) {
      max = *iter;
      break;
    }
  }

  std::cout << max << "\n";
}
