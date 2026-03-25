#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, temp = 2;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		temp += (temp - 1);
	}
	
	cout << temp * temp;

	return 0;
}