Here's the C++ code with the comments removed:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int src, dest, weight;

    Edge(int s, int d, int w) {
        src = s;
        dest = d;
        weight = w;
    }
};

class Subset {
public:
    int parent, rank;
};

int find(vector<Subset>& subsets, int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(vector<Subset>& subsets, int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

bool compareEdge(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

class KruskalMST {
public:
    int V, E;
    vector<Edge> edges;

    KruskalMST(int v, int e) {
        V = v;
        E = e;
    }

    void KruskalAlgorithm() {
        sort(edges.begin(), edges.end(), compareEdge);
        vector<Edge> result;
        vector<Subset> subsets(V);
        for (int v = 0; v < V; ++v) {
            subsets[v].parent = v;
            subsets[v].rank = 0;
        }

        cout << "\nIntermediate steps:" << endl;

        int e = 0;
        int i = 0;

        while (e < V - 1 && i < E) {
            Edge next_edge = edges[i++];

            int x = find(subsets, next_edge.src);
            int y = find(subsets, next_edge.dest);

            if (x != y) {
                result.push_back(next_edge);
                e++;
                Union(subsets, x, y);
                cout << "Edge selected: (" << next_edge.src << " -- " << next_edge.dest 
                     << ") weight: " << next_edge.weight << endl;
                cout << "Union of vertices: " << x << " and " << y << endl;
            } else {
                cout << "Edge (" << next_edge.src << " -- " << next_edge.dest 
                     << ") weight: " << next_edge.weight << " forms a cycle and is discarded." << endl;
            }
        }

        cout << "\nMinimum Spanning Tree:" << endl;
        for (const auto& edge : result)
            cout << edge.src << " -- " << edge.dest << " == " << edge.weight << endl;
    }
};

int main() {
    int V, E;

    cout << "Enter the number of vertices: ";
    cin >> V;

    cout << "Enter the number of edges: ";
    cin >> E;

    KruskalMST graph(V, E);

    cout << "Enter the source, destination, and weight of each edge:" << endl;
    for (int i = 0; i < E; i++) {
        int src, dest, weight;
        cout << "Edge " << i + 1 << ": ";
        cin >> src >> dest >> weight;
        graph.edges.push_back(Edge(src, dest, weight));
    }

    graph.KruskalAlgorithm();

    return 0;
}
```