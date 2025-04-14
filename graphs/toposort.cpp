#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& st) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, st);
        }
    }
    st.push(node);
}

vector<int> topologicalSort(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    stack<int> st;

    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            dfs(i, adj, visited, st);
        }
    }

    vector<int> topoOrder;
    while (!st.empty()) {
        topoOrder.push_back(st.top());
        st.pop();
    }

    return topoOrder;
}

int main() {
    int V = 4;
    vector<vector<int>> adj(V);

    // Add directed edges
    adj[0].push_back(3);
    adj[0].push_back(1);
    adj[1].push_back(2);

    vector<int> result = topologicalSort(V, adj);

    cout << "Topological Sort (DFS): ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
