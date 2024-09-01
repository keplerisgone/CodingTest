#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  std::string result = "";
  int N, recent = 0, temp = 0;

  while (true) {
    std::cin >> N;
    result = "";
    recent = 0;

    if (N == 0) {
      break;
    }

    for (int i = 0; i < N; i++) {
      std::cin >> temp;

      if (temp == recent) {
        continue;
      } else {
        recent = temp;
        result += (std::to_string(temp) + " ");
      }
    }

    result += "$";
    std::cout << result << "\n";
  }
  return 0;
}
