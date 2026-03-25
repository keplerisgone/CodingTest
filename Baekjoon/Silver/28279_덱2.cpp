#include <deque>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> d;
    int N, tmp, op;

    cin >> N;
    while (N--) {
        cin >> tmp;
        if (tmp == 1) {
            cin >> op;
            d.push_front(op);
        } else if (tmp == 2) {
            cin >> op;
            d.push_back(op);
        } else if (tmp == 3) {
            if (d.empty()) { cout << -1 << "\n"; continue;}
            cout << d.front() << "\n";
            d.pop_front();
        } else if (tmp == 4) {
            if (d.empty()) { cout << -1 << "\n"; continue;}
            cout << d.back() << "\n";
            d.pop_back();
        } else if (tmp == 5) {
            cout << d.size() << "\n";
        } else if (tmp == 6) {
            op = (d.empty()) ? 1 : 0;
            cout << op << "\n";
        } else if (tmp == 7) {
            if (d.empty()) { cout << -1 << "\n"; continue;}
            cout << d.front() << "\n";
        } else if (tmp == 8) {
            if (d.empty()) { cout << -1 << "\n"; continue;}
            cout << d.back() << "\n";
        }
    }

    return 0;
}