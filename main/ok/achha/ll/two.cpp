#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

typedef pair<int, int> pii;  // pair of (weight, vertex)

const int INF = numeric_limits<int>::max(); // Represents infinity

// Function to perform Dijkstra's algorithm
void dijkstra(vector<vector<pii>>& graph, int start, vector<int>& dist) {
    int n = graph.size();
    dist.assign(n, INF);  // Initialize distances to infinity
    dist[start] = 0;  // Distance to the start vertex is 0
    
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min-heap priority queue
    pq.push({0, start});  // Push the start vertex with distance 0
    
    while (!pq.empty()) {
        int u = pq.top().second;
        int current_dist = pq.top().first;
        pq.pop();
        
        // If the popped vertex is already processed, skip
        if (current_dist > dist[u]) continue;
        
        // Iterate through all adjacent vertices of u
        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            
            // If a shorter path to v is found through u
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n, m; // Number of vertices and edges
    cin >> n >> m;
    
    vector<vector<pii>> graph(n); // Adjacency list of pairs (neighbor, weight)
    
    // Reading edges
    for (int i = 0; i < m; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u].push_back({v, weight});
        graph[v].push_back({u, weight}); // If graph is undirected
    }
    
    int start_vertex;
    cin >> start_vertex; // Starting vertex for Dijkstra's algorithm
    
    vector<int> dist; // Array to store shortest distances from start_vertex
    dijkstra(graph, start_vertex, dist);
    
    // Output shortest distances from start_vertex to all vertices
    cout << "Shortest distances from vertex " << start_vertex << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << dist[i] << "\n";
    }
    
    return 0;
}
