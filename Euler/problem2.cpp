#include <iostream>

int main(int argc, char *argv[]) {

  int sum = 0;
  int a1 = 1;
  int a2 = 2;
  int a3 = 0;
  sum += a2;

  while (a3 <= 4000000) {
    a3 = a1 + a2;
    if (a3 % 2 == 0) {
      sum += a3;
    }
    a1 = a2;
    a2 = a3;
  }

  std::cout << sum << "\n";

  return 0;
}
