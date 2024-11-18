#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> array = {1, 2, 3};
	int best = 0;
	int temp = 0;

	for (int a = 0; a < n; a++)
	{
		temp = max(array[a], temp + array[a]);
		best = max(best, temp); 
	}
	
}