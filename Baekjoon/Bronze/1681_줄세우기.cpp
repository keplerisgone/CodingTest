#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  int N;
  std::string label;

  std::cin >> N >> label;

  int num = 0;

  for (int i = 0; i < N; i++) {
    num++;
    while (true) {
      std::string str_num = std::to_string(num);

      if (str_num.find(label) == std::string::npos) {
        break;
      } else {
        num++;
        continue;
      }
    }
  }

  std::cout << num << "\n";

  return 0;
}
