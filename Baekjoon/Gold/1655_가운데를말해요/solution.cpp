#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; 
    cin >> n;

    vector<int> vec;
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int> > min_heap;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        max_heap.push(temp);
        min_heap.push(max_heap.top());
        max_heap.pop();

        if (min_heap.size() > max_heap.size())
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
        
        cout << max_heap.top() << "\n";
   }

    return 0;
}
