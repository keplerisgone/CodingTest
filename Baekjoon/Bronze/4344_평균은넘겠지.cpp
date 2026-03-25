#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	float sum, avg, temp;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		vector<float> v;
		sum = 0;
		cin >> M;
		for (int j = 0; j < M; j++)
		{
			cin >> temp;
			sum += temp;
			v.push_back(temp);
		}
		
		avg = sum / (float) M;
		int cnt = 0;
		for (auto num : v)
		{
			if (num > avg)
			{
				cnt++;
			}
			
		}
		cout << fixed;
		cout.precision(3);
		cout << ((float) cnt / (float) M) * 100 << "%\n";
	}

	return 0;
}