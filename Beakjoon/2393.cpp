// 문제
// You have just learned how to output text to the screen and your teacher has
// challenged you to create an ASCII art of a chess piece. You have decided to
// make your favorite piece, the rook.

// 출력
// The rook art, exactly as shown below, with no extra blank spaces. In
// particular, a line must not end with a blank space.
#include <iostream>

int main(int argc, char *argv[]) {
  std::string rook;

  rook = "  ___  ___  ___\n"
         "  | |__| |__| |\n"
         "  |           |\n"
         "   \\_________/\n"
         "    \\_______/\n"
         "     |     |\n"
         "     |     |\n"
         "     |     |\n"
         "     |     |\n"
         "     |_____|\n"
         "  __/       \\__\n"
         " /             \\\n"
         "/_______________\\\n";

  std::cout << rook;
  return 0;
}
