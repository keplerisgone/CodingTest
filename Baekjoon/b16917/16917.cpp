#include <iostream>

int main(int argc, char *argv[]) {

  int A, B, C, X, Y, max, min, result = 0;

  std::cin >> A >> B >> C >> X >> Y;
  C *= 2;

  if ((A + B) < C) {
    result += (X * A + Y * B);
    std::cout << result;
    return 0;
  } else {
    result = (X > Y) ? C * Y : C * X;
  }

  if (X > Y) {
    result += (A < C) ? A * (X - Y) : C * (X - Y);
  } else {
    result += (B < C) ? B * (Y - X) : C * (Y - X);
  }

  std::cout << result;

  return 0;
}
