#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	int i = 0, temp = 1, cnt = 1;
	while (true) {
		temp += i;
		cout << temp << "\n";
		if (temp >= N)
		{
			break;
		}
		cnt++;
		i += 6;
	}

	cout << cnt;

	return 0;
}