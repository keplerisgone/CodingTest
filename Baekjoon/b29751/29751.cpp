// 문제
// 양의 정수
// $W$,
// $H$가 주어진다. 밑변의 길이가
// $W$이고, 높이가
// $H$인 삼각형의 넓이를 구하시오.
// 입력
// 정수
// $W$,
// $H$가 공백으로 구분되어 주어진다.
// $(1 \le W, H \le 100)$ 
//
// 출력
// 밑변의 길이가
// $W$이고, 높이가
// $H$인 삼각형의 넓이를 출력한다. 넓이는 항상 소수점 아래 첫 번째 자리까지
// 출력한다.

#include <iomanip>
#include <ios>
#include <iostream>

int main(int argc, char *argv[]) {

  int W, H;

  std::cin >> W >> H;

  std::cout << std::fixed;
  std::cout.precision(1);
  std::cout << (W * H * 0.5) << "\n";
  return 0;
}
