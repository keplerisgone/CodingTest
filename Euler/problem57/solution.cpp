#include <iostream>
#include <utility>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<std::pair<int, int>> a;

  int N;
  std::cin >> N;

  int tempA = 0;
  int tempB = 1;
  int temp;

  for (int i = 0; i < N; i++) {
    temp = tempA;
    tempA = tempB;
    tempB = 2 * tempB + temp;

    a.push_back({tempA, tempB});
    std::cout << "{" << tempA << ", " << tempB << "}\n";
  }

  return 0;
}
