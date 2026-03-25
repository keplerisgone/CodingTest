#include <iostream>

int main(int argc, char *argv[]) {

  int N, score = 0;
  std::string name = "aa";

  std::cin >> N;

  for (int i = 0; i < N; i++) {

    int temp_score;
    std::string temp_name;

    std::cin >> temp_name >> temp_score;

    if (temp_score > score) {
      score = temp_score;
      name = temp_name;
    } else if (temp_score == score) {
      name = (temp_name < name) ? temp_name : name;
    }
  }

  std::cout << name << "\n";

  return 0;
}
