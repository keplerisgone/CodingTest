#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int cnt = 0, K, N, i = 1;
	cin >> N >> K;

	while (i <= N)
	{
		if (N%i == 0) {
			cnt++;
		}

		if (cnt == K)
		{
			cout << i;
			return 0;
		}
		i++;
	}

	cout << 0;

	return 0;
}