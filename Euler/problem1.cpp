


#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int count = 1000;
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        if (i%3 == 0 || i%5 == 0)
        {
            sum += i;
        }
    }
    
    std::cout << sum << "\n";

    return 0;
}
