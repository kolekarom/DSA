#include <iostream>
#include <vector>
using namespace std;

#define INF 99999  // Define a large value representing infinity

// Number of vertices in the graph
#define V 4

// Function to print the shortest distance matrix
void printSolution(const vector< vector<int> >& dist) {  // Add space between > >
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF" << "     ";
            else
                cout << dist[i][j] << "     ";
        }
        cout << endl;
    }
}

// Floyd-Warshall algorithm to find all-pairs shortest paths
void floydWarshall(const vector< vector<int> >& graph) {  // Add space between > >
    // Initialize the distance matrix with the input graph matrix
    vector< vector<int> > dist = graph;  // Add space between > >

    // Update the distance matrix
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j, then update dist[i][j]
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Print the shortest distance matrix
    printSolution(dist);
}

int main() {
    // Define the graph using push_back instead of initializer lists
    vector< vector<int> > graph(V, vector<int>(V));  // Add space between > >

    graph[0][0] = 0;    graph[0][1] = 5;   graph[0][2] = INF; graph[0][3] = 10;
    graph[1][0] = INF;  graph[1][1] = 0;   graph[1][2] = 3;   graph[1][3] = INF;
    graph[2][0] = INF;  graph[2][1] = INF; graph[2][2] = 0;   graph[2][3] = 1;
    graph[3][0] = INF;  graph[3][1] = INF; graph[3][2] = INF; graph[3][3] = 0;

    // Run the Floyd-Warshall algorithm
    floydWarshall(graph);

    return 0;
}
