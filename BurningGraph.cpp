#include <bits/stdc++.h>

using namespace std;

// Function to perform BFS and find the farthest node from the start node
int findFarthestNode(const vector<vector<int>>& adj, int start, int& max_dist) {
    int n = adj.size();
    vector<int> dist(n, INT_MAX); // Distance from the start node
    queue<int> q;

    dist[start] = 0;
    q.push(start);

    int farthest_node = start;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == INT_MAX) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);

                if (dist[neighbor] > max_dist) {
                    max_dist = dist[neighbor];
                    farthest_node = neighbor;
                }
            }
        }
    }

    return farthest_node;
}

// Function to perform the farthest-first traversal and simulate burning the graph
void burnGraphFromFarthest(const vector<vector<int>>& adj, int start) {
    int n = adj.size();
    vector<bool> burned(n, false); // Track burned nodes

    int max_dist = 0;
    // Find the farthest node from the start node
    int farthest_node = findFarthestNode(adj, start, max_dist);

    queue<int> q;
    q.push(farthest_node);
    burned[farthest_node] = true;

    cout << "Burning order: " << farthest_node << " ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (!burned[neighbor]) {
                burned[neighbor] = true;
                q.push(neighbor);
                cout << neighbor << " ";
            }
        }
    }

    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);

    cout << "Enter edges (u v): " << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter the start node: ";
    cin >> start;

    burnGraphFromFarthest(adj, start);

    return 0;
}

/*
Sample Input 
Enter number of nodes and edges: 6 7
Enter edges (u v): 
0 1
0 2
1 3
2 4
2 5
3 4
4 5
Enter the start node: 0
*/

/*
Sample output 

Burning order: 5 2 4 0 1 3 

*/