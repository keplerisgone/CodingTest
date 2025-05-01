#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void find_num(int N, vector<int>::iterator it) {

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int N;
    cin >> N;
    long long int sum = 0;
    
    for (size_t i = 1; i <= N; i++)
    {
        sum += i * (N / i);
    }

    cout << sum;    

    return 0;
}
