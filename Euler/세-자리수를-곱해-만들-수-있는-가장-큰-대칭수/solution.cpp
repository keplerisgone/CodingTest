#include <iostream>
#include <string>

std::string reverse(std::string str) {
  std::string str2 = "";
  int len = str.length();

  for (int i = len - 1; i >= 0; i--) {
    char ch = str[i];
    str2 += ch;
  }

  return str2;
}

int main(int argc, char *argv[]) {

  int max = 0;
  int triple = 968;
  int va = 999;

  while (triple > 100) {

    va = 999;

    while (1) {

      std::string result = std::to_string(triple * va);

      std::string new_string = reverse(result);

      std::cout << result << "\n" << new_string << "\n";

      if (result == new_string) {
        max = max < (std::stoi(result)) ? std::stoi(result) : max;
        break;
      }

      if (va < 100) {
        break;
      }

      va--;
    }

    triple -= 11;
  }
  std::cout << max << "\n";

  return 0;
}
