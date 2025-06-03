#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string input;
	cin >> input;
	int cnt = 0;

	for (int i = 0; i < input.length();)
	{
		if (input.substr(i, 3) == "dz=")
		{
			cnt++;
			i += 3;
			continue;
		}

		string sub = input.substr(i, 2);
		
		if (input.substr(i, 2) == "c=" || input.substr(i, 2) == "c-" ||  input.substr(i, 2) == "d-" || input.substr(i, 2) == "lj" || input.substr(i, 2) == "nj" || input.substr(i, 2) == "s=" || input.substr(i, 2) == "z=")
		{
			cnt++;
			i += 2;
			continue;
		}
		cnt++;
		i++;
	}	
	
	cout << cnt;

	return 0;
}