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

  int cnt = 0;
  int start = 1;

  while (cnt < 10001) {

    start++;

    if (is_prime(start)) {
      std::cout << start << "\n";
      cnt++;
    }
  }

  std::cout << start << "\n";

  return 0;
}
