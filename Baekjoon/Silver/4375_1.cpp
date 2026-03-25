#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;

    while (cin >> n) {
        int remainder = 1 % n;  // 1을 n으로 나눈 나머지
        int count = 1;

        while (remainder != 0) {  
            remainder = (remainder * 10 + 1) % n;  // 새로운 1의 나머지를 구함
            count++;
        }

        cout << count << "\n";
    }

    return 0;
}
