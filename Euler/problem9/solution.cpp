#include <cstddef>
#include <iostream>
#include <tuple>

int main(int argc, char *argv[]) {

  int maxC = 1000;
  bool check = false;

  std::tuple<int, int, int> triples;

  // 조건을 만족하는 피타고라스 수
  for (int c = 1; c <= maxC; ++c) {
    for (int a = 1; a < c; ++a) {
      for (int b = a; b < c; ++b) {
        if (a * a + b * b == c * c) {
          if (a + b + c == 1000) {
            triples = std::make_tuple(a, b, c);
            check = true;
          }
        }
      }
      if (check) {
        break;
      }
    }
    if (check) {
      break;
    }
  }

  // 곱한다
  std::cout << std::get<0>(triples) * std::get<1>(triples) *
                   std::get<2>(triples)
            << "\n";

  return 0;
}
