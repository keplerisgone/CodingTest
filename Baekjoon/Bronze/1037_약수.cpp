#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;

    vector<int> vec;
    for (size_t i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    cout << vec.front() * vec.back() << "\n";

    return 0;
}
