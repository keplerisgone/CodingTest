// 문제
// In long flights, airlines offer hot meals. Usually the flight attendants push
// carts containing the meals down along the aisles of the plane. When a cart
// reaches your row, you are asked right away: “Chicken, beef, or pasta?” You
// know your choices, but you have only a few seconds to choose and you don’t
// know how your choice will look like because your neighbor hasn’t opened his
// wrap yet. . .
//
// The flight attendant in this flight decided to change the procedure. First
// she will ask all passengers what choice of meal they would prefer, and then
// she will check if the number of meals available in this flight for each
// choice are enough.
//
// As an example, consider that the available number of meals for chicken, beef
// and pasta are respectively (80, 20, 40), while the number of passenger’s
// choices for chicken, beef and pasta are respectively (45, 23, 48). In this
// case, eleven people will surely not receive their selection for a meal, since
// three passengers who wanted beef and eight passengers who wanted pasta cannot
// be pleased.
//
// Given the quantity of meals available for each choice and the number of meals
// requested for each choice, could you please help the flight attendant to
// determine how many passengers will surely not receive their selection for a
// meal?
//
// 입력
// The first line contains three integers Ca, Ba and Pa (0 ≤ Ca, Ba, Pa ≤ 100),
// representing respectively the number of meals available for chicken, beef and
// pasta. The second line contains three integers Cr, Br and Pr (0 ≤ Cr, Br, Pr
// ≤ 100), indicating respectively the number of meals requested for chicken,
// beef and pasta.
#include <iostream>

int main(int argc, char *argv[]) {

  int a[3];
  int b[3];

  std::cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];

  int sum = 0;

  for (int i = 0; i < 3; i++) {
    (a[i] < b[i]) ? sum = sum + (b[i] - a[i]) : sum += 0;
  }

  std::cout << sum << "\n";

  return 0;
}
