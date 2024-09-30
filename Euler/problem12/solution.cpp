#include <iostream>

long long triangular_num(int num) {
  long long result = 0;

  for (int i = 1; i <= num; i++) {
    result += i;
  }

  return result;
}

int divisor_num(long long num) {
  int cnt = 0;

  for (int i = num; i > 0; i--) {
    if (num % i == 0) {
      cnt++;
    }
  }

  return cnt;
}

int main(int argc, char *argv[]) {

  int temp = 11603;

  while (1) {
    temp += 1;

    long long tri = triangular_num(temp);
    int cnt = divisor_num(tri);

    std::cout << "triangular : " << tri << " divisor cnt : " << cnt
              << " temp : " << temp << "\n";

    if (cnt >= 500) {
      break;
    }
  }

  std::cout << temp << "\n";

  return 0;
}
