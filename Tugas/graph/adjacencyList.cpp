#include <iostream>
#include <list>
using namespace std;

class Graph
{
  int V;
  // array of list
  list<int> *l;

public:
  Graph(int V)
  {
    this->V = V;
    l = new list<int>[V];
  }

  void addEdge(int x, int y)
  {
    l[x].push_back(y);
    l[y].push_back(x);
  }
  
  void printGraph()
  {
    for (int i = 0; i < V; i++)
    {
      cout << "Vertex " << i << "-> ";
      for (int num : l[i])
      {
        cout << num << ", ";
      };
      cout << endl;
    }
  }
};
int main()
{
  // Graph g(4);
  // g.addEdge(0, 1);
  // g.addEdge(0, 2);
  // g.addEdge(2, 3);
  // g.addEdge(1, 2);
  // g.printGraph();

  Graph g(6);
  g.addEdge(0, 1);
  g.addEdge(0, 5);
  g.addEdge(1, 2);
  g.addEdge(1, 5);
  g.addEdge(2, 4);
  g.addEdge(3, 4);
  g.addEdge(3, 5);
  g.printGraph();


  return 0;
}