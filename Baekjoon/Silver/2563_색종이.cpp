#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<vector<int>> paper(100, vector<int>(100,0));

	int N, x, y;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				paper[x+j][y+k] = 1;
			}
		}
	}
	
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		sum += accumulate(paper[i].begin(), paper[i].end(), 0);
	}
	
	cout << sum;

	return 0;
}