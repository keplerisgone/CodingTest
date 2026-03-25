#include <iostream>
#include <vector>
#include <deque>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque<int> dq;
	int N;
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		dq.push_front(i);
		i--;
		if (i == 0) break;
		dq.push_back(i);
	}
	
	for (auto i : dq)
	{
		cout << i << " ";
	}
	
	return 0;
}