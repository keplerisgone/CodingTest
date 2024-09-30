#include <iostream>

bool is_prime(int num) {

  for (int i = num - 1; i > 1; i--) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main(int argc, char *argv[]) {

  int start = 2;
  long long sum = 0;

  for (int i = start; i <= 2000000; i++) {
    if (is_prime(i)) {
      sum += i;
      std::cout << "Prime : " << i << "\n";
    }
  }

  std::cout << "result = " << sum << "\n";

  return 0;
}
