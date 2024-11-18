#include <iostream>
#include <map>

int main(int argc, char *argv[]) {
  std::map<int, int> num_map;
  int N;
  std::cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 2; j <= 100; j++) {
      if (num_map.find(i * j) == num_map.end()) {
        num_map.insert({i * j, 1});
      }
    }
  }

  int sum = 0;

  for (auto it : num_map) {
    std::cout << it.first << "\n";
    sum++;
  }

  std::cout << "Sumation : " << sum << "\n";

  return 0;
}
