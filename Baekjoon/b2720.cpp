#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, total, quarter, dime, nickel, penny;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> total;
		quarter = total / 25;
		total = total % 25;
		dime = total / 10;
		total = total % 10;
		nickel = total / 5;
		total = total % 5;
		penny = total;
		cout << quarter << " " << dime	<< " " << nickel << " " << penny << "\n";
	}
	
	return 0;
}