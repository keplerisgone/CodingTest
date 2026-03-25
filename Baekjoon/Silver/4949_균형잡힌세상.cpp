#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    while (s != ".")
    {
        // 0 - (), 1 - []
        stack<int> recent;
        string result = "yes";
        for (auto &&c : s)
        {
            if (c == '(') recent.push(0);
            if (c == '[') recent.push(1);
            if (c == ')') {
                if (recent.empty()) {
                    result = "no"; break;
                } else {
                    if (recent.top() == 0) { recent.pop(); }
                    else { result = "no"; break; }
                }
            }       
            if (c == ']') {
                if (recent.empty()) {
                    result = "no"; break;
                } else {
                    if (recent.top() == 1) { recent.pop(); }
                    else { result = "no"; break; }
                }
            }
        }
        if (!recent.empty()) result = "no";
        cout << result + "\n";
        getline(cin, s);
    }
    return 0;
}