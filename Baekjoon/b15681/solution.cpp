#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > treeVec;
vector<int> sizeTree;

void makeTree(int parent, int currentNode) 
{
    for (auto it = treeVec[currentNode].begin() ; it != treeVec[currentNode].end() ; )
    {
        if (*it == parent)
        {
            it = treeVec[currentNode].erase(it);
        }
        else
        {
            int temp = *it;
            makeTree(currentNode, temp);
            it++;
        }
    }
}

void countSize(int currentNode)
{
    sizeTree[currentNode] = 1;
    for (auto it = treeVec[currentNode].begin() ; it != treeVec[currentNode].end(); it++)
    {
        countSize(*it);
        sizeTree[currentNode] += sizeTree[*it];
    }
    
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, r, q;
    cin >> n >> r >> q;

    treeVec.resize(n+1);
    sizeTree.resize(n+1);
    fill(sizeTree.begin(), sizeTree.end(), 0);


    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        treeVec[u].push_back(v);
        treeVec[v].push_back(u);
    }

    makeTree(-1, r);
    countSize(r);

    for (int i = 0; i < q; i++)
    {
        int u;
        cin >> u;
        cout << sizeTree[u] << "\n";
    }
        
    return 0;
}
