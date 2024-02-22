#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
      cin >> grid[i];
    }
    int min_i = n, min_j = n, max_i = -1, max_j = -1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (grid[i][j] == '1')
        {
          min_i = min(min_i, i);
          min_j = min(min_j, j);
          max_i = max(max_i, i);
          max_j = max(max_j, j);
        }
      }
    }
    bool isSquare = true;
    for (int i = min_i; i <= max_i; i++)
    {
      int count = 0;
      for (int j = min_j; j <= max_j; j++)
      {
        if (grid[i][j] == '1')
          count++;
      }
      if (count != max_j - min_j + 1)
      {
        isSquare = false;
        break;
      }
    }
    if (isSquare)
    {
      cout << "SQUARE\n";
    }
    else
    {
      cout << "TRIANGLE\n";
    }
  }
  return 0;
}