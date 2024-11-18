#include <iostream>

int main(int argc, char *argv[]) {
  int sum = 1;

  for (int i = 2; i <= 501; i++) {
    int temp = (2 * i - 1) * (2 * i - 1);
    sum += temp;

    for (int j = 0; j < 3; j++) {
      temp -= 2 * (i - 1);
      sum += temp;
    }
  }

  std::cout << sum << "\n";
  return 0;
}
