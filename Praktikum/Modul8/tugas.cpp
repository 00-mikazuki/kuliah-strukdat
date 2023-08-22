#include <iostream>
#include <vector>

using namespace std;

void printAdjacencyMatrix(vector< vector<int> > &adjMatrix)
{
  int n = adjMatrix.size();
  for (int i = 0; i < n; i++)
  {
    cout << '[';
    for (int j = 0; j < n; j++)
    {
      cout << adjMatrix[i][j] << " ";
    }
    cout << ']';
    cout << endl;
  }
}

int main()
{
  int n = 7; // Jumlah simpul
  vector< vector<int> > adjMatrix(n, vector<int>(n, 0));
  // Mengatur sisi-sisi pada adjacency matrix
  // adjMatrix[0][1] = 1;
  // adjMatrix[0][2] = 1;
  // adjMatrix[1][0] = 1;
  // adjMatrix[1][3] = 1;
  // adjMatrix[1][2] = 1;
  // adjMatrix[2][0] = 1;
  // adjMatrix[2][3] = 1;
  // adjMatrix[3][1] = 1;
  // adjMatrix[3][2] = 1;
  // adjMatrix[3][2] = 1;

  adjMatrix[0][1] = 1;
  adjMatrix[0][2] = 1;
  adjMatrix[0][3] = 1;
  adjMatrix[1][0] = 1;
  adjMatrix[1][2] = 1;
  adjMatrix[1][4] = 1;
  adjMatrix[2][0] = 1;
  adjMatrix[2][1] = 1;
  adjMatrix[2][3] = 1;
  adjMatrix[2][4] = 1;
  adjMatrix[2][5] = 1;
  adjMatrix[2][6] = 1;
  adjMatrix[3][0] = 1;
  adjMatrix[3][2] = 1;
  adjMatrix[3][5] = 1;
  adjMatrix[3][6] = 1;
  adjMatrix[4][1] = 1;
  adjMatrix[4][2] = 1;
  adjMatrix[5][2] = 1;
  adjMatrix[5][3] = 1;
  adjMatrix[6][2] = 1;
  adjMatrix[6][3] = 1;


  cout << "Adjacency matrix:" << endl;
  printAdjacencyMatrix(adjMatrix);
  return 0;
}
