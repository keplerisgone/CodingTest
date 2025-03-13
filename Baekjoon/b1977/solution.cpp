#include <iostream>
#include <math.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int M, N;

    cin >> M >> N;

    // sqrt(M)의 정수 부분 구하기
    int a = (int) sqrt(M);
    int result = a * a;
    int temp = (a + 1) * (a + 1); // 값 판별용
    int minimum; 
    
    int sum = 0;
    if (result < M && temp > N)
    {   // 범위를 아예 벗어나는 경우
        sum = -1;
        cout << sum;
        return 0;
    } else if (result == M)
    {   // M과 같을 경우
        minimum = sum = result;
        a++;
        result = a * a;
    } else {
        // 나머지 경우
        minimum = temp;
        a++;
        result = a * a;
    }
    
    while (result <= N)
    {
        sum += result;
        a++;
        result = a * a;        
    }
    
    cout << sum << "\n" << minimum;
    
    return 0;
}
