#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  int N;
  std::string result;

  std::cin >> N;

  for (int i = N; i > 0; i--) {
    std::string temp = std::to_string(i);
    bool is_result = true;

    for (char ch : temp) {
      if (ch != '4' && ch != '7') {
        is_result = false;
        break;
      }
    }

    if (is_result) {
      result = temp;
      break;
    }
  }

  std::cout << result;
  return 0;
}
