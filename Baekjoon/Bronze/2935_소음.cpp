#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  int zero_num = 0;
  std::string A, B;
  char oper;
  std::string result = "";

  std::cin >> A >> oper >> B;

  if (oper == '+') {
    if (A.length() > B.length()) {
      result = A;
      zero_num = B.length() - 1;
    } else {
      result = B;
      zero_num = A.length() - 1;
    }

    result[result.length() - 1 - zero_num] = '1';

    if (A == B) {
      result = A;
      result[0] = '2';
    }
  } else {
    result += '1';

    for (int i = 0; i < (A.length() + B.length() - 2); i++) {
      result += "0";
    }
  }

  std::cout << result;

  return 0;
}
