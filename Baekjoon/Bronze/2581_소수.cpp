#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> v(M + 1, 0);
	v[0] = v[1] = 1;

	// 체 완성
	for (int x = 2; x <= M; x++)
	{
		if (v[x]) continue;
		for (int u = 2 * x; u <= M ; u += x)
		{
			v[u] = 1;
		}
	}

	vector<int> v2;
	int sum = 0;

	for (int i = N; i <= M; i++)
	{
		if (v[i] == 0)
		{
			sum += i;
			v2.push_back(i);
		};
	}
	
	if (v2.end() == v2.begin())
	{
		cout << -1;
		return 0;
	}

	cout << sum << "\n" << v2.front();
	
	return 0;
}