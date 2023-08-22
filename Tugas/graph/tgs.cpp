#include <iostream>
#include <vector>
#include <unordered_map>

// Graph class using adjacency matrix
class GraphAdjacencyMatrix {
private:
    std::vector<std::vector<int>> matrix;
    int numVertices;

public:
    GraphAdjacencyMatrix(int numVertices) : numVertices(numVertices) {
        matrix.resize(numVertices, std::vector<int>(numVertices, 0));
    }

    void addEdge(int source, int destination) {
        matrix[source][destination] = 1;
        matrix[destination][source] = 1;
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

// Graph class using adjacency list
class GraphAdjacencyList {
private:
    std::unordered_map<int, std::vector<int>> adjacencyList;

public:
    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source);
    }

    void printGraph() {
        for (const auto& pair : adjacencyList) {
            std::cout << "Vertex " << pair.first << ": ";
            for (int vertex : pair.second) {
                std::cout << vertex << " ";
            }
            std::cout << std::endl;
        }
    }
};

// Graph class using forest (disjoint sets)
class GraphForest {
private:
    std::vector<int> parent;

    int find(int vertex) {
        if (parent[vertex] == -1)
            return vertex;
        return find(parent[vertex]);
    }

public:
    void addEdge(int source, int destination) {
        int sourceParent = find(source);
        int destinationParent = find(destination);

        if (sourceParent != destinationParent)
            parent[sourceParent] = destinationParent;
    }

    void printGraph(int numVertices) {
        std::cout << "Parent array: ";
        for (int i = 0; i < numVertices; i++) {
            std::cout << parent[i] << " ";
        }
        std::cout << std::endl;
    }

    void initialize(int numVertices) {
        parent.resize(numVertices, -1);
        // menginisialisasi array orangtua dengan ukuran numVertices. Semua elemen awal diatur ke -1, yang menandakan bahwa setiap simpul awalnya merupakan root (akar) dari setnya sendiri.
    }
};

int main() {
    int numVertices = 7;

    // Graph using adjacency matrix
    GraphAdjacencyMatrix graphAdjMatrix(numVertices);
    graphAdjMatrix.addEdge(0, 1);
    graphAdjMatrix.addEdge(0, 2);
    graphAdjMatrix.addEdge(0, 3);
    graphAdjMatrix.addEdge(1, 2);
    std::cout << "Adjacency Matrix :" << std::endl;
    graphAdjMatrix.printGraph();
    std::cout << std::endl;

    // Graph using adjacency list
    GraphAdjacencyList graphAdjList;
    graphAdjList.addEdge(0, 1);
    graphAdjList.addEdge(0, 2);
    graphAdjList.addEdge(0, 3);
    graphAdjList.addEdge(1, 2);
    std::cout << "Adjacency List :" << std::endl;
    graphAdjList.printGraph();
    std::cout << std::endl;

    // Graph using forest (disjoint sets)
    GraphForest graphForest;
    graphForest.initialize(numVertices);
    graphForest.addEdge(0, 1);
    graphForest.addEdge(0, 2);
    graphForest.addEdge(0, 3);
    graphForest.addEdge(1, 2);
    graphForest.addEdge(2, 4);
    graphForest.addEdge(2, 6);
    std::cout << "Adjecency Forest :" << std::endl;
    graphForest.printGraph(numVertices);

    return 0;
}