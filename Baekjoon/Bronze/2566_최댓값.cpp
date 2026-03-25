#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int max = -1, temp, x,y;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> temp;
			if (temp > max) {
				max = temp;
				x = i+1;
				y = j+1;
			}
		}
	}
	
	cout << max << "\n" << x << " " << y;

	return 0;
}