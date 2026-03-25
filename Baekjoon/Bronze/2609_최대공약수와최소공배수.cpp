#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, N;
    cin >> M >> N;
    int max, min;

    if (M > N)
    {
        max = M;
        min = N;
    } else 
    {
        max = N;
        min = M;
    }

    int temp = max % min;

    while (temp != 0)
    {
        max = min;
        min = temp;
        temp = max % min;
    }
    
    cout << min << "\n" << M * N / min;

    return 0;
}
