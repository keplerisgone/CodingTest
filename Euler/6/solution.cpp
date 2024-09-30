#include <iostream>

int power_sum(int num) {
  int result = 0;

  for (size_t i = 1; i <= num; i++) {
    result += i * i;
  }

  std::cout << result << "\n";

  return result;
}

int sum_power(int num) {
  int result = 0;

  for (size_t i = 1; i <= num; i++) {
    result += i;
  }

  std::cout << result * result << "\n";

  return (result * result);
}

int main(int argc, char *argv[]) {

  int result;

  result = sum_power(100);
  result -= power_sum(100);

  std::cout << result << "\n";

  return 0;
}
