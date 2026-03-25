#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	int f = 1, b, tp, result = 0;
	cin >> s >> b;

	for (auto a = s.rbegin() ; a != s.rend() ; a++){
		if (*a <= 'Z' && 'A' <= *a) {
			tp = *a - 'A' + 10;
		} else {
			tp = *a - '0';
		}
		result += tp * f;
		f *= b;
	}

	cout << result;
	return 0;
}