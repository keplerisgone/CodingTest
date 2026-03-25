#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> x;
	vector<int> y;
	int a,b,n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	cout << (x.back() - x.front()) * (y.back() - y.front());

	return 0;
}