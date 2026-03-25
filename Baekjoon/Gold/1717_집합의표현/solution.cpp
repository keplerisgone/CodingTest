#include <bits/stdc++.h>

using namespace std;

vector<int> graph;

void initialize(int n) {
    graph.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
        graph[i] = i;
    }
}

// 재귀로 부모 노드를 탐색
int find(int n) {
    if (graph[n] != n) {
        graph[n] = find(graph[n]);
    }
    return graph[n];
}

// 두 노드를 합침. 부모 노드를 찾은 뒤 합침
void union_node(int n, int m) {
    int rootA = find(n);
    int rootB = find(m);
    
    // 작은 쪽을 기준으로 합친다
    if (rootA <= rootB) {
        graph[rootB] = graph[rootA];
    } else {
        graph[rootA] = graph[rootB];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, temp, a, b;
    cin >> n >> m;
    
    initialize(n);
    for (int i = 0; i < m; i++)
    {
        cin >> temp >> a >> b;
        if (temp) {
            if (find(a) == find(b)) {
                cout << "yes\n";
            } else {
                cout << "no\n"; 
            }
        } else {
            union_node(a, b);
        }
    }
}