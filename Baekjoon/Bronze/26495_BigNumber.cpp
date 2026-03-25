// 문제
// One of the professors at PLU has had a lot of trouble reading student
// programs. He just cannot read that small print. Your job is to write a
// program that will read a positive integer and rewrite the number in large
// block format. The block format for each digit is given below.
//
// 0000    1 2222 3333 4  4 5555 6666 7777 8888 9999
// 0  0    1    2    3 4  4 5    6       7 8  8 9  9
// 0  0    1 2222 3333 4444 5555 6666    7 8888 9999
// 0  0    1 2       3    4    5 6  6    7 8  8    9
// 0000    1 2222 3333    4 5555 6666    7 8888    9
// 입력
// There will be one positive integer on the first line.
//
// 출력
// Print each digit of the integer in large block format starting with the
// leftmost digit. There should be one blank line between each block digit.

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  std::string numbers[10];

  numbers[0] = "0000\n0  0\n0  0\n0  0\n0000\n";
  numbers[1] = "   1\n   1\n   1\n   1\n   1\n";
  numbers[2] = "2222\n   2\n2222\n2   \n2222\n";
  numbers[3] = "3333\n   3\n3333\n   3\n3333\n";
  numbers[4] = "4  4\n4  4\n4444\n   4\n   4\n";
  numbers[5] = "5555\n5   \n5555\n   5\n5555\n";
  numbers[6] = "6666\n6   \n6666\n6  6\n6666\n";
  numbers[7] = "7777\n   7\n   7\n   7\n   7\n";
  numbers[8] = "8888\n8  8\n8888\n8  8\n8888\n";
  numbers[9] = "9999\n9  9\n9999\n   9\n   9\n";

  std::string N;
  std::cin >> N;

  for (int i = 0; i < N.size(); i++) {
    std::cout << numbers[(int)(N[i] - '0')] << "\n";
  }

  return 0;
}
