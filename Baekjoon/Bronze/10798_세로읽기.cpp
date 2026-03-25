#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<vector<char>> v(15);
	char temp;
	string line;

	for (int i = 0; i < 5; i++)
	{
		int j = 0;
		getline(cin, line);
		for (char c : line)
		{
			if (c == ' ')
			{
				continue;
			}
			v[j].push_back(c);
			j++;
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (char c : v[i])
		{
			cout << c;
		}
	}
	
	return 0;
}