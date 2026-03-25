#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long A, B, V;
	cin >> A >> B >> V;

	long long result = ceil((double) (V-A) / (A-B)) + 1;
	
	cout << result;

	return 0;
}