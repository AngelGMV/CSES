#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define FOR(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define ROF(i, a, b) for (int i = (int)a - 1; i >= (int)b; --i)

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<vector<vector<int>>> constructAdj(vector<vector<int>> &edges, int V) {

    vector<vector<vector<int>>> adj(V);

    for (const auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if (u >= V || v >= V) {
            cerr << "ERROR: Nodo fuera de rango: u=" << u << " v=" << v << " V=" << V << endl;
            continue;
        }
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    return adj;
}
vector<int> dijkstra(int V, vector<vector<int>> &edges, int src){

    vector<vector<vector<int>>> adj = constructAdj(edges, V);

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    vector<int> dist(V, INT_MAX);
    pq.push({0, src});
    dist[src] = 0;
    while (!pq.empty()){
        int u = pq.top()[1];
        pq.pop();

        for (auto x : adj[u]){

            int v = x[0];
            int weight = x[1];

            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    FOR(i, 0, m) {
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({u-1, v-1, w});
    }
    vector<int> dist = dijkstra(n, edges, 0);
    for (auto x : dist) {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
