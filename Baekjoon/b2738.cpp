#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M, temp;
	cin >> N >> M;
	vector<int> result(N*M, 0);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> temp;
				result[j*M + k] += temp;
			}
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << result[i*M+j] << " ";
		}
		cout << "\n";
	}

	return 0;
}