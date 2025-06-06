#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
	if (n == 0)
	{
		return 0;
	} else if (n == 1 || n == 2) {
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	cout << fibonacci(N);

	return 0;
}