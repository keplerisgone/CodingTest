#include <bits/stdc++.h>

// macro, 문자열 치환의 기능을 함
#define F first
#define S second
#define PB push_back
#define MP make_pair

// 이런 것도 가능
#define REP(i,a,b) for (int i = a; i <= b; i++)

// namespace 설정
using namespace std;

// typedef, 긴 타입명을 짧게 만들 수 있음
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int n = 3;
vi subset;
vector<vi> subsets;

void search(int k) {
	if (k == n + 1) subsets.push_back(subset);
	else {
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
		search(k+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	std::cin.tie(0);

	search(1);

	for (auto &innerVec : subsets)
	{
		for (auto &ele : innerVec)
		{
			cout << ele << " ";
		}
		cout << "\n";
	}
	
}