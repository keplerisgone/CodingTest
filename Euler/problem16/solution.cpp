#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  int N;
  std::cin >> N;

  std::vector<int> num_vec;

  num_vec.push_back(1);

  for (int i = 0; i < N; i++) {
    bool temp = false;
    for (auto it = num_vec.begin(); it != num_vec.end(); it++) {
      *it *= 2;
      if (temp) {
        *it += 1;
        temp = false;
      }
      std::cout << *it << "\n";
      if (*it > 9) {
        temp = true;
        *it = *it % 10;
        if ((it + 1) == num_vec.end()) {
          num_vec.push_back(1);
          break;
        }
      }
    }
  }

  int sum = 0;

  for (int num : num_vec) {
    std::cout << num << "\n";
    sum += num;
  }

  std::cout << "Input : " << N << "/ Sum : " << sum << "\n";

  return 0;
}
